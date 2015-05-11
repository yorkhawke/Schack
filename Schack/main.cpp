#include <SFML/Graphics.hpp>
#include <iostream>
#include "System.h"
#include "Match.h"
#include "Player.h"

int SCRWIDTH = 650;
int SCRHEIGHT = 640;

Text menu();

int main()
{
	Match aMatch;
	RenderWindow window;
	Player p1;
	Player p2;

	Text text;
	Font font;
	window.create(sf::VideoMode(SCRWIDTH, SCRHEIGHT), "Schack");

	if (!font.loadFromFile("OptimusPrinceps.ttf"))
	{
		std::cout << "error";

	}
	else
	{
		text.setFont(font);
		text.setString("Welcome\n	To\nSchack Simulator 3000\n---------Meny---------\n1.SetPlayers\n2.ShowScore\n3.PlayMatch\n4.Close");
		text.setCharacterSize(40);
		text.setColor(sf::Color::White);
		FloatRect textRect = text.getLocalBounds();
		text.setOrigin(textRect.width / 2, textRect.height / 2);
		text.setPosition(Vector2f(SCRWIDTH / 2.0f, SCRHEIGHT / 2.0f));
	}

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(text);
		window.display();
	}
	return 0;
}



