#include <SFML/Graphics.hpp>
#include "System.h"
#include "Match.h"

//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//	sf::CircleShape shape(100.f);
//	shape.setFillColor(sf::Color::Green);
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//
//		window.clear();
//		window.draw(shape);
//		window.display();
//	}
//
//	return 0;
//}

int main()
{
	SystemC sys;

	sys.startWindow();

	while (sys.isO())
	{
		sys.Et();
		sys.winClear();
		sys.Draw();
		sys.displayWin();
	}

	return 0;
}

