#ifndef _ROOK_PIECE_HPP_
#define _ROOK_PIECE_HPP_

#include "../header/piece.hpp"


class Rook : public Piece
{
        private:
        std::string value = "R";
        public:
        virtual bool validateMove();

        ~Pawn() = default;


        std::string getValue();
        virtual void setVal(std::string);
        using Piece::Piece;
};


#endif
