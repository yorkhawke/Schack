// Includes
#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class SystemC
{
private:
	//Attributes
	RenderWindow window;
public:
	//Functions
	SystemC();
	~SystemC();
	void startWindow();
	void displayWin();
	void winClear();
	void CloseWin();
	void Draw();
	void Et();
	bool isO();
};

#endif