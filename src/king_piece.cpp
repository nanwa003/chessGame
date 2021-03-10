#ifndef _KING_PIECE_CPP_
#define _KING_PIECE_CPP_

#include "../header/king_piece.hpp"
#include <iostream>
#include "Board.cpp"
extern Board cells;

King::King(Color color, Position pos) {
    this->val = "K";
    this->color = color;
    this->pos = pos;
}

bool King::validateMove(Position moveTo)
{
       bool validMove = false;
	if (moveTo.ypos == pos.ypos + 1 && (moveTo.xpos == pos.xpos + 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
	{validMove = true;}
	else if (moveTo.ypos == pos.ypos + 1 && (moveTo.xpos == pos.xpos - 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos - 1 && (moveTo.xpos == pos.xpos + 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos - 1 && (moveTo.xpos == pos.xpos - 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}

	else if (moveTo.ypos == pos.ypos + 1 && (moveTo.xpos == pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos - 1 && (moveTo.xpos == pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}	
	else if (moveTo.ypos == pos.ypos  && (moveTo.xpos == pos.xpos + 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos && (moveTo.xpos == pos.xpos - 1)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	return validMove;
}



#endif
