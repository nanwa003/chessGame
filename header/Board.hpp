//Board Class header file
#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include "../src/Square.cpp"


class Board{
   private:
	Square cells[8][8];
	void initPieces();
	bool isWithinBoard(Position p);
 

   public:
	//constructors and destructors
	   Board();
           ~Board();
	   void Draw();
	   bool movePiece (Position p1, Position p2);
	   Piece* GetPiece(Position posOfPiece);
}




#endif
