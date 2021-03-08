#ifndef _ROOK_PIECE_CPP_
#define _ROOK_PIECE_CPP_

#include "../header/rook_piece.hpp"
#include <iostream>

bool Rook::validateMove()
{
        std::cout << std::endl << "Moving" << std::endl;
	return false;
}

std::string Rook::getValue()
{
        return value;
}

void Rook::setVal(std::string v)
{

        val = v;
}


#endif
