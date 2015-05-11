// Includes
#include <iostream>
#include <string.h>

using namespace std;
class Player
{
private:
	//Attributes
	int ID;
	int NrOfWins;
	string Name;
	bool Concede;
	Player();
public:
	//Functions
	Player(int,int,string,bool);
	~Player();
	void ResetPieces();
	void PlayTurn();
	//Get/Set functions
	int GetID();
	void SetID(int);
	int GetNrOfWins();
	void SetNrOfWins(int);
	string GetName();
	void SetName(string);
	bool GetConcede();
	void SetConcede(bool);
};
