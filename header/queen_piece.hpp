#ifndef _QUEEN_PIECE_HPP_
#define _QUEEN_PIECE_HPP_

#include "../header/piece.hpp"


class Queen : public Piece
{
        private:
        std::string value = "Q";
        public:
        virtual bool validateMove();

        ~Pawn() = default;


        std::string getValue();
        virtual void setVal(std::string);
        using Piece::Piece;
};


#endif
