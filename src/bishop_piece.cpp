#ifndef _BISHOP_PIECE_CPP_
#define _BISHOP_PIECE_CPP_

#include "../header/bishop_piece.hpp"
#include <iostream>

Bishop::Bishop(Color color, Position pos) {
    this->val = "B";
    this->color = color;
    this->pos = pos;
}

bool Bishop::validateMove(Position moveTo)
{
        bool validMove = false;
	
	for (int i = 1; i < 8; i++)
	{
	if(moveTo.ypos == pos.ypos + i && (moveTo.xpos == pos.xpos + i) && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true; }

	else if(moveTo.ypos == pos.ypos + i && (moveTo.xpos == pos.xpos - i) && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true; }

	else if(moveTo.ypos == pos.ypos - i && (moveTo.xpos == pos.xpos + i) && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true; }
	
	else if(moveTo.ypos == pos.ypos - i && (moveTo.xpos == pos.xpos - i) && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true; }
	
     	}
	return validMove;

}



#endif
