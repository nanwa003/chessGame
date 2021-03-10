#ifndef _QUEEN_PIECE_HPP_
#define _QUEEN_PIECE_HPP_

#include "../header/piece.hpp"


class Queen : public Piece
{
        public:
         bool validateMove(Position);
        virtual ~Queen() = default;
	Queen(Color color, Position pos);
};


#endif
