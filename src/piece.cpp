#ifndef _PIECE_CPP_
#define _PIECE_CPP_


#include "../header/piece.hpp"
#include <iostream>

Piece::Piece(bool color)
{
	setColor(color);
}


Piece::Piece(int x, int y)
{
	setPos(x,y);
}

void Piece::setColor(bool c)
{
	color = c;
}

void Piece::setPos(int x, int y)
{
	myPos.x = x;
	myPos.y = y;
	myPos.occupied = true;	
}

bool Piece::capture(pos check)
{
	if (check.x == myPos.x && check.y == myPos.y && check.occupied)
	{
		//std::cout << endl << "Piece cpatured!" << endl;	
		return true;
	}
	return false;
	
	
}

int Piece::getVal()
{
	return val;
}

#endif // _PIECE_CPP_
