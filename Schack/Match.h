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

public:
	//Functions
	Match();
	~Match();
	void PlayMatch(Player p1,Player p2,int nrM);
	//Get/Set functions
};
#endif
