#include "Pawn.h"
#include <SFML\Graphics.hpp>

using namespace sf;

Pawn::~Pawn()
{

}
Pawn::Pawn()
{

}
Pawn::Pawn(Vector2f pos, bool s, Sprite sp, Color c) :Piece(pos,s,sp,c)
{
	sprite.setTextureRect(IntRect(405, 0, 75, 80));
	firstmove = true;
}

Vector2f Pawn::Move(Vector2f pos)
{
	if (pos.x < 641 && pos.y<641)
	{
		int x = (int)(pos.x / 80);
		int y = (int)(pos.y / 80);
		if (abs((int)Position.x - x * 80)==80 || (int)Position.x == x*80)
		{
			if (firstmove)
			{
				if (abs((int)Position.y - y * 80 == 160) || abs((int)Position.y - y * 80) == 80)
				Position.x = (float)(x * 80);
				Position.y = (float)(y * 80);
				sprite.setPosition(Position);
				firstmove = false;
			}
			if (abs((int)Position.y - y * 80) == 80)
			{
				Position.x = (float)(x * 80);
				Position.y = (float)(y * 80)+10;
				sprite.setPosition(Position);
			}
		}
	}
	return  Position;
}
