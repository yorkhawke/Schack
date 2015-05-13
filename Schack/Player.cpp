#include "Player.h"
#include "PieceHeader.h"
#include <SFML\Graphics.hpp>
using namespace std;
using namespace sf;
Player::~Player()
{
  
}
Player::Player()
{
  
}
Player::Player(int ID, int Nr, string name, bool c,Sprite sprite)
{
  this->ID=ID;
  this->NrOfWins=Nr;
  this->Name = name;
  this->Concede = c;

  pieces[0] = new Pawn(Vector2f(0,480),false,sprite,Color::White);
  pieces[1] = new Pawn(Vector2f(80, 480), false, sprite, Color::White);
  pieces[2] = new Pawn(Vector2f(160, 480), false, sprite, Color::White);
  pieces[3] = new Pawn(Vector2f(240, 480), false, sprite, Color::White);
  pieces[4] = new Pawn(Vector2f(320, 480), false, sprite, Color::White);
  pieces[5] = new Pawn(Vector2f(400, 480), false, sprite, Color::White);
  pieces[6] = new Pawn(Vector2f(480, 480), false, sprite, Color::White);
  pieces[7] = new Pawn(Vector2f(560, 480), false, sprite, Color::White);
  pieces[8] = new Rook(Vector2f(0,560),false,sprite,Color::White);
  pieces[9] = new Knight(Vector2f(80, 560), false, sprite, Color::White);
  pieces[10] = new Bishop(Vector2f(400, 560), false, sprite, Color::White);
  pieces[11] = new Queen(Vector2f(320, 560), false, sprite, Color::White);
  pieces[12] = new King(Vector2f(240, 560), false, sprite, Color::White);
  pieces[13] = new Bishop(Vector2f(160, 560), false, sprite, Color::White);
  pieces[14] = new Knight(Vector2f(480, 560), false, sprite, Color::White);
  pieces[15] = new Rook(Vector2f(560, 560), false, sprite, Color::White);

}
void Player::ResetPieces(bool col)
{
	Vector2f pos;
	if(col)
	{
		pos=Vector2f(0,480);
		for(int i = 0; i < 16 ; i++)
		{
			pieces[i]->SetPosition(pos);
			pieces[i]->SetColour(Color::White);
			pos.x+=80;
			if(i==80)
			{
				pos.y+=80;
				pos.x=0;
			}
		}
	}
	else
	{
		pos = Vector2f(0,80);
		for (int i = 0; i < 16; i++)
		{
			pieces[i]->SetPosition(pos);
			pieces[i]->SetColour(Color::Black);
			pos.x += 80;
			if (i == 8)
			{
				pos.y -= 80;
				pos.x = 0;
			}
		}
	}

}
void Player::PlayTurn(RenderWindow* window)
{
  Vector2f previouspos;
  bool Playturn = false;
  while(!Playturn)
  {
  	if(Mouse::isButtonPressed(Mouse::Right))
    	{
      	Vector2i mousePosition = sf::Mouse::getPosition(*window);
		Vector2f mousePositionFloat = static_cast<sf::Vector2f>(mousePosition);
		for (int i = 0; i < 16; i++)
		{
			int x = (int)mousePositionFloat.x / 80;
			int y = (int)mousePositionFloat.y / 80;
			previouspos = pieces[i]->GetPosition();
			if (x * 80 == (int)previouspos.x && (int)previouspos.y == y * 80)
			{
				pieces[i]->SetTargeted(true);
			}
			if ((x * 80 != (int)previouspos.x || (int)previouspos.y != y * 80) && pieces[i]->GetTargeted() == true)
			{
				pieces[i]->SetTargeted(false);
			}
		}
	}
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		Vector2i mousePosition = sf::Mouse::getPosition(*window);
		Vector2f mousePositionFloat = static_cast<sf::Vector2f>(mousePosition);
		for (int i = 0; i < 16; i++)
		{
			if (pieces[i]->GetTargeted() == true)
			{
				previouspos = pieces[i]->GetPosition();
				if (previouspos != pieces[i]->Move(mousePositionFloat))
				{
					Playturn = true;
				}
			}
		}
	}
	if(Playturn)
	{
		for(int i = 0; i<16;i++)
		{
			if(pieces[i]->GetTargeted())
			{
				pieces[i]->SetTargeted(false);
			}
		}
	}
    }
 
}

int Player::GetID()
{
  return this->ID;
}
void Player::SetID(int ID)
{
  this->ID=ID;
}
int Player::GetNrOfWins()
{
  return this->NrOfWins;
}
void Player::SetNrOfWins(int nr)
{
  this->NrOfWins = nr;
}
string Player::GetName()
{
  return this->Name;
}
void Player::SetName(string name)
{
  this->Name = name;
}
bool Player::GetConcede()
{
  return this->Concede;
}
void Player::SetConcede(bool c)
{
  this->Concede = c;
}
void Player::RenderPieces(RenderWindow* win)
{

}
