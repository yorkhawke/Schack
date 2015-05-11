#include "System.h"

SystemC::SystemC()
{

}

SystemC::~SystemC()
{

}

void SystemC::startWindow()
{
	window.create(sf::VideoMode(800, 600), "Schack");

}

void SystemC::Draw()
{

}

void SystemC::displayWin()
{
	window.display();
}

void SystemC::winClear()
{
	window.clear();
}

void SystemC::CloseWin()
{
	window.close();
}

void SystemC::Et()
{
sf::Event event;	
while (window.pollEvent(event))	
{
	if (event.type == sf::Event::Closed)
	{
		window.close();
	}
}
}

bool SystemC::isO()
{
	return window.isOpen();
}