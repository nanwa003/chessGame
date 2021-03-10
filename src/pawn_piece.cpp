#ifndef _PAWN_PIECE_CPP_
#define _PAWN_PIECE_CPP_

#include "../header/pawn_piece.hpp"
#include "Board.cpp"
#include <iostream>

extern Board cells;  

Pawn::Pawn(Color color, Position pos)
{
	this->val = "P";
	this->color = color;
	this->pos = pos;
	this->doubleJump = true;
}

bool Pawn::validateMove(Position moveTo)
{

	
    bool validMove = false;
    int allowableMove1 = 1;
    int allowableMove2 = 2;

    if (color == Black)
    {
        allowableMove1 = -1;
        allowableMove2 = -2;
    }



    if (moveTo.ypos == pos.ypos + allowableMove1 && moveTo.xpos == pos.xpos && cells.GetPiece(moveTo) == NULL)
    {
        validMove = true;

        doubleJump = false;

    }
   
    else if (doubleJump == true && moveTo.ypos == (pos.ypos + allowableMove2) && moveTo.xpos == pos.xpos
            && cells.GetPiece(moveTo) == NULL)  
    {
        
        validMove = true;
    }
    
    else if (moveTo.ypos == pos.ypos + allowableMove1 && (moveTo.xpos == pos.xpos - 1 || moveTo.xpos == pos.xpos + 1))
    {

       
        if (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color) ) 
        {
            validMove = true;
        }
    }

   
    return validMove;

}




#endif // _PAWN_PIECE_CPP_
