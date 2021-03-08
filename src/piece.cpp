#ifndef _PIECE_CPP_
#define _PIECE_CPP_


#include "../header/piece.hpp"
#include <iostream>

Piece::Piece(Color color)
{
	setColor(color);
}


Piece::Piece(int x, int y)
{
	setPos(x,y);
}

void Piece::setColor(Color c)
{
	color = c;
}

void Piece::setPos(int x, int y)
{
	myPos.x = x;
	myPos.y = y;
//	myPos.occupied = true;	
}
/*

bool Piece::capture(pos check)
{
	if (check.x == myPos.x && check.y == myPos.y && check.occupied)
	{
		//std::cout << endl << "Piece cpatured!" << endl;	
		return true;
	}
	return false;
	
	
}
*/

pos getPos()
{
	return myPos;
}

Color getColor()
{
	return color;
}


std::string Piece::getVal()
{
	return val;
}

#endif // _PIECE_CPP_
