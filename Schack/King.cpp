#include <SFML\Graphics.hpp>
#include "King.h"

using namespace sf;

King::~King()
{

}
King::King()
{

}

King::King(Vector2f pos, bool s, Sprite sp, Color c) :Piece(pos, s, sp, c)
{
	sprite.setTextureRect(IntRect(165, 0, 75, 80));
}

bool King::GetIsChecked()
{
	return this->IsChecked;
}

Vector2f King::Move(Vector2f pos)
{
	if (pos.x < 641 && pos.y<651)
	{
		int x = (int)(pos.x / 80);
		int y = (int)(pos.y / 80);
		if ((abs((int)Position.x - x * 80) == 80 && abs((int)Position.y - y * 80) == 80) || (abs((int)Position.x - x * 80) == 80 && abs((int)Position.y - y * 80) == 0) || (abs((int)Position.x - x * 80) == 0 && abs((int)Position.y - y * 80) == 80))
		{
			Position.x = (float)(x * 80);
			Position.y = (float)(y * 80);
			sprite.setPosition(Position);
		}
	}
	return  Position;
}
