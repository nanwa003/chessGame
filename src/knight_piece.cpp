#ifndef _KNIGHT_PIECE_CPP_
#define _KNIGHT_PIECE_CPP_

#include "../header/knight_piece.hpp"
#include <iostream>
#include "Board.cpp"



Knight::Knight(Color color, Position pos) {
    this->val = "N";
    this->color = color;
    this->pos = pos;
}




bool Knight::validateMove(Position moveTo)
{
        bool validMove = false;
 	
	// moves to empty or opposing piece
	if (moveTo.ypos == pos.ypos + 2 && moveTo.xpos == pos.xpos + 1 && (cells.GetPiece(moveTo) == NULL
	|| cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))		
	{validMove = true; }
	else if (moveTo.ypos == pos.ypos + 2 && moveTo.xpos == pos.xpos - 1  && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
	{validMove = true;}
	else if (moveTo.ypos == pos.ypos - 2 && moveTo.xpos == pos.xpos + 1 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	else if (moveTo.ypos == pos.ypos -2 && moveTo.xpos == pos.xpos - 1 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	 else if (moveTo.ypos == pos.ypos + 1 && moveTo.xpos == pos.xpos + 2 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	 else if (moveTo.ypos == pos.ypos + 1 && moveTo.xpos == pos.xpos - 2 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	 else if (moveTo.ypos == pos.ypos - 1 && moveTo.xpos == pos.xpos + 2 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
	 else if (moveTo.ypos == pos.ypos - 1 && moveTo.xpos == pos.xpos - 2 && (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
			return validMove;
}

#endif 
