//square class implementation

#ifndef _SQUARE_HPP
#define _SQUARE_HPP

#include "../header/Square.hpp"
#include "Piece.cpp"



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
