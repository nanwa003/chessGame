#ifndef _KING_PIECE_CPP_
#define _KING_PIECE_CPP_

#include "../header/king_piece.hpp"
#include <iostream>


bool King::validateMove()
{
       std::cout << std::endl << "Moving" << std::endl;
	return false;
}
std::string King::getValue()
{
        return value;
}

void King::setVal(std::string v)
{

        val = v;
}



#endif
