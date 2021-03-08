#ifndef _KING_PIECE_HPP_
#define _KING_PIECE_HPP_

#include "../header/piece.hpp"


class King : public Piece
{
        private:
        std::string value = "K";
        public:
        virtual bool validateMove();

        ~Pawn() = default;


        std::string getValue();
        virtual void setVal(std::string);
        using Piece::Piece;
};


#endif
