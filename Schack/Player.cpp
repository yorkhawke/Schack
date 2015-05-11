#include "Player.h"

using namespace std;

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
}
void Player::ResetPieces(int i)
{
  
}
void Player:.PlayTurn()
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
