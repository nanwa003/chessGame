#ifndef _KNIGHT_PIECE_CPP_
#define _KNIGHT_PIECE_CPP_

#include "../header/knight_piece.hpp"
#include <iostream>


bool Knight::validateMove()
{
        std::cout << std::endl << "Moving" << std::endl;
	return false;
}

std::string Knight::getValue()
{
        return value;
}

void Knight::setVal(std::string v)
{

        val = v;
}




#endif 
