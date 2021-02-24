#include <iostream>
#include "player.hpp"
#include "board.hpp"
#include "game.hpp"


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
reture score;
}
void  Player::setName(string player1) const
{
    _name = palyer1;
}
string player::getName() const
{
    return player1;
}
