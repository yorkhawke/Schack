#ifndef KING_H_
#define KING_H_

#include <SFML\Graphics.hpp>
#include "Piece.h"

class King :public Piece
{
private:
	bool IsChecked;
	King();
public:
	King(Vector2f, bool, Sprite, Color);
	~King();
	Vector2f GetPosition();
	void SetPosition(Vector2f);
	bool GetState();
	void SetState(bool);
	Sprite GetTexture();
	void SetTexture(Sprite);
	Color GetColour();
	void SetColour(Color);
	Vector2f Move();
	bool GetIsChecked();
};
#endif
