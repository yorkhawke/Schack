#ifndef PIECE_H_
#define PIECE_H_

#include<SFML/Graphics.hpp>

using namespace sf;
class Piece
{
protected:
	Vector2f Position;
	bool State;
	Sprite sprite;
	Color Colour;
	Piece();
public:
	Piece(Vector2f, bool, Sprite, Color);
	virtual ~Piece();
};

#endif
