#ifndef PLAYER_H
#define PLAYER_H

#include "piece.hpp"
#include "game.hpp"
#include <set>

using namespace std;

class Player
{
public:
/**
 *  *  
 *   *creat a palyer
 *    */
Player(string _name,string _palyerColor);
/**
 *  *
 *   *defult destructor
 *    */
~Player();

bool makeMove();
void capture(Piece * aPiece);
int calcScore() const;
void setName(string player1);//function to set player names
string getName() const;//function to get names

private:
string name;
string playerColor;

};
#endif

