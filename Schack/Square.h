// Includes
#ifndef SQUARE_H_
#define SQUARE_H_
#include<SFML\Graphics.hpp>
#include <iostream>

using namespace sf;
class Square
{
private:
	//Attributes
	Vector2f Position;
	bool Occupied;
	Square();

	 
public:
	//Functions

	Square(Vector2f,bool);
	~Square();
	//Get/Set functions
	bool GetOccupied();
	void SetOccupied(bool);
	Vector2f GetPosition();
	void SetPosition(Vector2f);
};

#endif
