#ifndef _PAWN_PIECE_HPP_
#define _PAWN_PIECE_HPP_

#include "../header/piece.hpp"


class Pawn : public Piece
{
	private:
	bool doubleJump;
	public:
	bool validateMove(Position);
	
	~Pawn(){}


	//std::string getValue();
	//virtual void setVal(std::string );
	//using Piece::Piece;
	Pawn(Color color, Position pos);
};


#endif // _PAWN_PIECE_HPP_
