#ifndef _KNIGHT_PIECE_HPP_
#define _KNIGHT_PIECE_HPP_

#include "../header/piece.hpp"


class Knight : public Piece
{
        private:
        std::string  value = "N";
        public:
        virtual bool validateMove();

        ~Pawn() = default;


        std::string getValue();
        virtual void setVal(std::string);
        using Piece::Piece;
};


#endif 
