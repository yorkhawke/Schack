#include <SFML/Graphics.hpp>
#include "System.h"
#include "Match.h"
#include "Player.h"

int main()
{
	SystemC sys;

	Match aMatch;
	Player p1;
	Player p2;

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

