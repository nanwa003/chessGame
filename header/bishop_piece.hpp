#ifndef _BISHOP_PIECE_HPP_
#define _BISHOP_PIECE_HPP_

#include "../header/piece.hpp"


class Bishop : public Piece
{
  
        public:
        virtual bool validateMove(Position);
	Bishop(Color color, Position pos);
        virtual ~Bishop() = default;
	
};


#endif
