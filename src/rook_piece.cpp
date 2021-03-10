#ifndef _ROOK_PIECE_CPP_
#define _ROOK_PIECE_CPP_

#include "../header/rook_piece.hpp"
#include <iostream>

extern Board cells;

Rook::Rook(Color color, Position pos) {
    this->val = "R";
    this->color = color;
    this->pos = pos;
}

bool Rook::validateMove(Position moveTo)
{
        bool validMove = false;
	unsigned int size = 8;
	for (int i = 1; i <size; i++ )
	{ 
		if (moveTo.ypos == pos.ypos + i && (moveTo.xpos ==  pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true; }
	else if (moveTo.ypos == pos.ypos - i && (moveTo.xpos ==  pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos  && (moveTo.xpos ==  pos.xpos + i)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos  && (moveTo.xpos ==  pos.xpos - i)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	}
	return validMove;
}




#endif
