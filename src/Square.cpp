//square class implementation

#ifndef _SQUARE_CPP
#define _SQUARE_CPPP

#include "../header/Square.hpp"
#include "piece.cpp"



//default constructor
Square::Square() {
	chessPiece = NULL;
}


//Getter function 
Piece* Square::getPiece() {
	return chessPiece;
}

void Square::setPiece(Piece* p) {
	this->chessPiece = p;
}

void Square::Clear(){
	this->chessPiece = NULL;
}

#endif 
