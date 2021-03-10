#ifndef _QUEEN_PIECE_CPP_
#define _QUEEN_PIECE_CPP_

#include "../header/queen_piece.hpp"
#include <iostream>
extern Board cells;

Queen::Queen(Color color, Position pos) {
    this->val = "Q";
    this->color = color;
    this->pos = pos;
}


bool Queen::validateMove(Position moveTo)
{
	bool validMove = false;
        for (int i = 1; i < 8;i++)
	{
	if (moveTo.ypos == pos.ypos + i && (moveTo.xpos == pos.xpos + i)&& (cells.GetPiece(moveTo) == NULL
        || cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color)))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos + i && (moveTo.xpos == pos.xpos - i)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos - i && (moveTo.xpos == pos.xpos + i)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos - i && (moveTo.xpos == pos.xpos - i)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}

        else if (moveTo.ypos == pos.ypos + i && (moveTo.xpos == pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos - i && (moveTo.xpos == pos.xpos)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos  && (moveTo.xpos == pos.xpos + i)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
        else if (moveTo.ypos == pos.ypos && (moveTo.xpos == pos.xpos - i)&& (cells.GetPiece(moveTo) == NULL
        || (cells.GetPiece(moveTo) != NULL && (cells.GetPiece(moveTo)->getColor() != this->color))))
        {validMove = true;}
	}
	return validMove;
}






#endif 
