#ifndef _KNIGHT_PIECE_HPP_
#define _KNIGHT_PIECE_HPP_

#include "../header/piece.hpp"

extern Board cells;

class Knight : public Piece
{
     
        public:
        virtual bool validateMove(Position);
        virtual ~Knight() = default;
	
	Knight(Color color, Position pos);
};


#endif 
