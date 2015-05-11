#ifndef KNIGHT_H_
#define KNIGHT_H_
#include "Piece.h"
#include <SFML\Graphics.hpp>

class Knight :public Piece
{
private:
	Knight();
public:
	~Knight();
	Knight(Vector2f, bool, Sprite, Color);
	Vector2f GetPosition();
	void SetPosition(Vector2f);
	bool GetState();
	void SetState(bool);
	Sprite GetTexture();
	void SetTexture(Sprite);
	Color GetColour();
	void SetColour(Color);
	Vector2f Move();
};

#endif
