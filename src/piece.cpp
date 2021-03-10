#ifndef _PIECE_CPP_
#define _PIECE_CPP_


#include "../header/piece.hpp"
#include <iostream>


Piece::Piece()
{
	val = " ";
}

void Piece::Draw()
{
	if (color == Black) {
        std::cout << "b";
    }
    else {
        std::cout << "w";
    }
    std::cout << val;
}

void Piece::setColor(Color c)
{
	color = c;
}

void Piece::setPos(Position pos)
{
	this->pos = pos;
}

Position Piece::getPos()
{
	return pos;
}

Color Piece::getColor()
{
	return color;
}


std::string Piece::getVal()
{
	return val;


}

#endif // _PIECE_CPP_
