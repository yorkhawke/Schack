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

	Text text,text1,text11,text2,text3;
	Font font;
	window.create(sf::VideoMode(SCRWIDTH, SCRHEIGHT), "Schack");

	if (!font.loadFromFile("OptimusPrinceps.ttf"))
	{
		std::cout << "error";

	}
	else
	{
		//Meny
		text.setFont(font);
		text.setString("Welcome\n	To\nSchack Simulator 3000\n---------Meny---------\n1.SetPlayers\n2.ShowScore\n3.PlayMatch\n4.Close");
		text.setCharacterSize(40);
		text.setColor(sf::Color::White);
		FloatRect textRect = text.getLocalBounds();
		text.setOrigin(textRect.width / 2, textRect.height / 2);
		text.setPosition(Vector2f(SCRWIDTH / 2.0f, SCRHEIGHT / 2.0f));

		//choice 1
		text1.setFont(font);
		text11.setFont(font);
		text1.setString("Please enter Player 1 name:");
		text11.setString("Please enter Player 2 name");
		text1.setCharacterSize(30);
		text11.setCharacterSize(30);
		text1.setOrigin(textRect.width / 2, textRect.height / 2);
		text1.setPosition(Vector2f(SCRWIDTH / 2.0f, SCRHEIGHT / 2.0f));
		text11.setOrigin(textRect.width / 2, textRect.height / 2);
		text11.setPosition(Vector2f(SCRWIDTH / 2.0f, SCRHEIGHT / 2.0f));

	}


	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Num1))
		{
			window.clear();
			window.draw(text1);
			window.display();
			string P1name;
			scanf("%s", P1name);
			window.clear();
			window.draw(text11);
			window.display();
			string P2name;
			scanf("%s", P2name);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Num2))
		{

		}
		else if (Keyboard::isKeyPressed(Keyboard::Num3))
		{

		}
		else if (Keyboard::isKeyPressed(Keyboard::Num4))
		{
			return 0;
		}
		window.clear();
		window.draw(text);
		window.display();
	}
	return 0;
}



