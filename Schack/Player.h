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
public:
	//Functions
	Player();
	~Player();
	void ResetPieces();
	void PlayTurn();
	//Get/Set functions
};