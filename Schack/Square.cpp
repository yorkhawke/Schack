#include "Square.h"
#include <SFML\Graphics.hpp>
using namespace sf;

Square::Square()
{

}
Square::~Square()
{

}
Square::Square(Vector2f pos, Sprite sp, bool o)
{
	Position = pos;
	sprite = sp;
	if (o == true)
	{
		sprite.setColor(Color(0, 0, 255, 255));
		o = false;
	}
	IsOccupied = o;
	sprite.setPosition(pos);
}
Vector2f Square::GetPosition()
{
	return this->Position;
}
Sprite Square::GetTexture()
{
	return this->sprite;
}
bool Square::GetIsOccupied()
{
	return this->IsOccupied;
}
void Square::SetIsOccupied(bool o)
{
	IsOccupied = o;
}
