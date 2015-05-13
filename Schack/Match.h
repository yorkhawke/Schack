#ifndef MATCH_H_
#define MATCH_H_

// Includes
#include <iostream>

#include "System.h"
#include "Input.h"
#include "Player.h"

using namespace sf;
class Match
{
private:
	//Attributes
	bool game = { true };

public:
	//Functions
	Match();
	~Match();
	void PlayMatch(RenderWindow* win);

	//Get/Set functions
};
#endif
