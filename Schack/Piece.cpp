#include "Piece.h"
#include <SFML\Graphics.hpp>

using namespace sf;
Piece::~Piece()
{

}

Piece::Piece()
{

}

Piece::Piece(Vector2f pos, bool s, Sprite sp, Color c)
{
	Position = pos;
	State = s;
	sprite= sp;
	sprite.setPosition(pos);
	Colour = c;
	Targeted=false;
}

Vector2f Piece::GetPosition()
{
	return Position;
}
void Piece::SetPosition(Vector2f pos)
{
	Position = pos;
	sprite.setPosition(pos);
}
bool Piece::GetState()
{
	return State;
}
void Piece::SetState(bool s)
{
	State = s;
}
Sprite Piece::GetTexture()
{
	return this->sprite;
}
void Piece::SetTexture(Sprite sp)
{
	sprite = sp;
}
Color Piece::GetColour()
{
	return Colour;
}
void Piece::SetColour(Color c)
{
	Colour = c;
	sprite.setColor(c);
}
bool Piece::GetTargeted()
{
	return Targeted;
}
void Piece::SetTargeted(bool o)
{
	if (o)
	{
		sprite.setColor(Color::Red);
	}
	else
	{
		sprite.setColor(Colour);
	}
	Targeted = o;
}
