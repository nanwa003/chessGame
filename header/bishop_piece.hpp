#ifndef _BISHOP_PIECE_HPP_
#define _BISHOP_PIECE_HPP_

#include "../header/piece.hpp"


class Bishop : public Piece
{
        private:
        std::string value = "B";
        public:
        virtual bool validateMove();

        ~Pawn() = default;

	
        std::string  getValue();
        virtual void setVal(std::string);
        using Piece::Piece;
};


#endif
