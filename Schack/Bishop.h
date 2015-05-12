#ifndef BISHOP_H_
#define BISHOP_H_
#include "Piece.h"
#include <SFML\Graphics.hpp>

class Bishop :public Piece
{
private:
	Bishop();
public:
	Bishop(Vector2f, bool, Sprite, Color);
	~Bishop();
	Vector2f GetPosition();
	void SetPosition(Vector2f);
	bool GetState();
	void SetState(bool);
	Sprite GetTexture();
	void SetTexture(Sprite);
	Color GetColour();
	void SetColour(Color);
	Vector2f Move(Vector2f);
};


#endif
