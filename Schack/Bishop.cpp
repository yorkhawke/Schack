#include <SFML\Graphics.hpp>
#include "Bishop.h"

using namespace sf;

Bishop::~Bishop()
{

}
Bishop::Bishop()
{

}
Bishop::Bishop(Vector2f pos, bool s, Sprite sp, Color c) :Piece(pos, s, sp, c)
{
	sprite.setTextureRect(IntRect(85, 0, 75, 80));
}

Vector2f Bishop::Move(Vector2f pos)
{
	if (pos.x < 641 && pos.y<651)
	{
		int x = (int)(pos.x / 80);
		int y = (int)(pos.y / 80);
		if (abs((int)Position.y - y * 80) == abs((int)Position.x - x * 80))
		{
			Position.x = (float)(x * 80);
			Position.y = (float)(y * 80);
			sprite.setPosition(Position);
		}
	}
	return  Position;
}
