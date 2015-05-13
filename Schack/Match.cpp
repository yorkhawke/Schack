#include "Match.h"

Match::Match()
{

}

Match::~Match()
{

}

void Match::PlayMatch(RenderWindow* win)
{
	Sprite Sp1, Sp2;
	Player p1(1, 0, "Player 1", false, Sp1);
	Player p2(2, 0, "Player 2", false, Sp2);

	p1.ResetPieces(true);
	p2.ResetPieces(false);

	Texture tex;
	if (!tex.loadFromFile("Pieces2.png"))
	{

	}
	Sprite sprite;
	sprite.setTexture(tex);
	sprite.setTextureRect(IntRect(480, 0, 80, 80));
	Vector2f pos(0, 0);
	Square Board[64];

	bool o = false;
	for (int i = 0; i < 64; i++)
	{
		if (i % 2 == 0)
		{
			if (i == 0)
				o = false;
			else if (i < 8 && i > 0 || i < 24 && i>15 || i < 40 && i > 31 || i < 56 && i > 47)
				o = false;
			else
				o = true;

		}
		else
		{
			if (i < 8 && i>0 || i < 24 && i>15 || i < 40 && i>31 || i < 56 && i > 47)
				o = true;
			else
				o = false;
		}
		Board[i] = Square(pos, sprite, o);
		if (pos.x < 560)
		{
			pos.x += 80;
		}
		else
		{
			pos.x = 0;
			pos.y += 80;
		}
	}

	win->clear();
	for (int i = 0; i < 64; i++)
	{
		win->draw(Board[i].GetTexture());
	}
	win->display();

	while (game)
	{

		p1.PlayTurn(win);

		p2.PlayTurn(win);

	}


}
