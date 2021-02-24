#include <iostream>
#include "../header/piece.hpp"
#include "../header/board.hpp"
#include "../header/game.hpp"


Player::Player(string _name, string _playerColor) :name(_name),playerColor(_playerColor) {
}

Player::~Player()
{

}
void Player::capture(Piece* aPiece)
{
aPiece->setLocation(NULL);
_capturedPieces.insert(aPiece);
}

int Player::score() const
{
 int score = 0;
    

 for (set<Piece*>::iterator itr = _capturedPieces.begin(); itr != _capturedPieces.end(); ++itr)
{
  score += ((Piece*)*itr)->value();     
 }
           
 return score;
     }
void  Player::setName(string player1) const
{
    _name = palyer1;
}
string player::getName() const
{
    return player1;
}
void Player:: setColor (const palyerColor & color){
setColor( color.white, color.black);
}

