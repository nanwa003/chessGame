#ifndef _ROOK_PIECE_HPP_
#define _ROOK_PIECE_HPP_

#include "../header/piece.hpp"


class Rook : public Piece
{
    
        public:
        virtual bool validateMove(Position);

       virtual ~Rook() = default;

	Rook(Color color, Position pos);
       
};


#endif
