#ifndef _BISHOP_PIECE_CPP_
#define _BISHOP_PIECE_CPP_

#include "../header/bishop_piece.hpp"
#include <iostream>

bool Bishop::validateMove()
{
        std::cout << std::endl << "Moving" << std::endl;
	return false;
}

std::string Bishop::getValue()
{
        return value;
}

void Bishop::setVal(std::string v)
{

        val = v;
}


#endif
