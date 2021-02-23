#ifndef _PAWN_PIECE_HPP_
#define _PAWN_PIECE_HPP_

#include "../header/piece.hpp"


class Pawn : public Piece
{
	private:
	int value = 1;
	public:
	virtual void movePiece();
	
	~Pawn() = default;


	int getValue();
	virtual void setVal();
	using Piece::Piece;	
};


#endif // _PAWN_PIECE_HPP_
