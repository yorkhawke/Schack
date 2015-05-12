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
}

Vector2f Piece::GetPosition()
{
	return Position;
}
void Piece::SetPosition(Vector2f pos)
{
	Position = pos;
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
	return sprite;
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
}
