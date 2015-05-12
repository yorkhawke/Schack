#include "Player.h"
#include "PieceHeader.h"
using namespace std;
using namespace sf;
Player::~Player()
{
  
}
Player::Player()
{
  
}
Player::Player(int ID, int Nr, string name, bool c)
{
  this->ID=ID;
  this->NrOfWins=Nr;
  this->Name = name;
  this->Concede = c;
  piece[0] = new Pawn(Vector2f(0,480),false,sprite,Color::White);
  piece[1] = new Pawn(Vector2f(80, 480), false, sprite, Color::White);
  piece[2] = new Pawn(Vector2f(160, 480), false, sprite, Color::White);
  piece[3] = new Pawn(Vector2f(240, 480), false, sprite, Color::White);
  piece[4] = new Pawn(Vector2f(320, 480), false, sprite, Color::White);
  piece[5] = new Pawn(Vector2f(400, 480), false, sprite, Color::White);
  piece[6] = new Pawn(Vector2f(480, 480), false, sprite, Color::White);
  piece[7] = new Pawn(Vector2f(560, 480), false, sprite, Color::White);
  piece[8] = new Rook(Vector2f(0,560),false,sprite,Color::White);
  piece[9] = new Rook(Vector2f(560, 560), false, sprite, Color::White);
  piece[10] = new Knight(Vector2f(80, 560), false, sprite, Color::White);
  piece[11] = new Knight(Vector2f(480, 560), false, sprite, Color::White);
  piece[12] = new Bishop(Vector2f(160, 560), false, sprite, Color::White);
  piece[13] = new Bishop(Vector2f(400, 560), false, sprite, Color::White);
  piece[14] = new King(Vector2f(240, 560), false, sprite, Color::White);
  piece[15] = new Queen(Vector2f(320, 560), false, sprite, Color::White);
}
void Player::ResetPieces(int i)
{
  
}
void Player::PlayTurn()
{
  
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
