#ifndef _PAWN_PIECE_CPP_
#define _PAWN_PIECE_CPP_

#include "../header/pawn_piece.hpp"
#include <iostream>


bool Pawn::validateMove()
{
	std::cout << std::endl << "Moving" << std::endl;
	return false;
}

std::string Pawn::getValue()
{
        return value;
}

void Pawn::setVal(std::string v)
{	

	val = v;
}




#endif // _PAWN_PIECE_CPP_
