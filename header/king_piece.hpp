#ifndef _KING_PIECE_HPP_
#define _KING_PIECE_HPP_

#include "../header/piece.hpp"


class King : public Piece
{
       
        public:
        virtual bool validateMove(Position);
        ~King() = default;
        King(Color color, Position pos);
       
};


#endif
