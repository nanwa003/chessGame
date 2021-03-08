#ifndef _QUEEN_PIECE_CPP_
#define _QUEEN_PIECE_CPP_

#include "../header/queen_piece.hpp"
#include <iostream>


 void Queen::validateMove()
{
        std::cout << std::endl << "Moving" << std::endl;
	return false;
}

std::string Queen::getValue()
{
        return value;
}

void Queen::setVal(std::string v)
{

        val = v;
}




#endif 
