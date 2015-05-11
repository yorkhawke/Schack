#ifndef ROOK_H_
#define ROOK_H_


#include "Piece.h"
#include <SFML\Graphics.hpp>
class Rook :public Piece
{
private:
	Rook();
public:
	Rook(Vector2f, bool, Sprite, Color);
	~Rook();
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
