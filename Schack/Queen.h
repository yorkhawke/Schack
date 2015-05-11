#ifndef QUEEN_H_
#define QUEEN_H_

#include <SFML\Graphics.hpp>
#include "Piece.h"

class Queen :public Piece
{
private:
	Queen();
public:
	Queen(Vector2f, bool, Sprite, Color);
	~Queen();
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
