//Square class that serves as leaf for the Board class

#ifndef _SQUARE_HPP
#define _SQUARE_HPP

#include "../src/piece.cpp"


class Square {

private:
	Piece *chessPiece;


public:
     //constructors and destructors 
	Square();
        ~Square() = default;

     	Piece *getPiece();
	void setPiece(Piece *piece);
	void Clear();
};
#endif
