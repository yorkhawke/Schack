#ifndef PAWN_H_
#define PAWN_H_
#include"Piece.h"
#include <SFML\Graphics.hpp>

class Pawn : public Piece
{
private:
	Pawn();
public:
	~Pawn();
	Pawn(Vector2f, bool, Sprite, Color);
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
