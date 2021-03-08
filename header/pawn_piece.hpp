#ifndef _PAWN_PIECE_HPP_
#define _PAWN_PIECE_HPP_

#include "../header/piece.hpp"


class Pawn : public Piece
{
	private:
	std::string val = "P"
	public:
	virtual bool validateMove();
	
	~Pawn() = default;


	std::string getValue();
	virtual void setVal(std::string );
	using Piece::Piece;	
};


#endif // _PAWN_PIECE_HPP_
