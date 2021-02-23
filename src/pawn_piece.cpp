#ifndef _PAWN_PIECE_CPP_
#define _PAWN_PIECE_CPP_

#include "../header/pawn_piece.hpp"
#include <iostream>


 void Pawn::movePiece()
{
	std::cout << std::endl << "Moving" << std::endl;
}

int Pawn::getValue()
{
        return value;
}

void Pawn::setVal()
{	

	val = getValue();	
}




#endif // _PAWN_PIECE_CPP_
