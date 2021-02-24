// implementation file for Board.hpp

#include <iostream>
#include "../header/Board.hpp"


Board::Board()
{
	setBoard();
}

//returns square indexed by user with exception handling
Square Board::getCells (int x, int y)
{
	if (x < 0 || x > 7 ||y < 0 || y > 7)
		//exception handling right here
	return squares[x][y];
	
}

void Board::setBoard()
{
	//setup board with the black pieces first, then white pieces
	cells[0][0] = new Square(0,0, new Rook(true));
	cells[0][1] = new Square(0,1,new Knight(true));
	cells[0][2] = new Square(0,2, new Bishop(true));
 	cells[0][3] = new Square(0,3, new King(true));
	cells[0][4] = new Square(0,4, new Queen(true));
	cells[0][5] = new Square(0,5, new Bishop(true));
	cells[0][6] = new Square(0,6, new Knight(true));
	cells[0][7] = new Square(0,7, new Rook(true));
	//setup white pawns
	cells[1][0] = new Square(0,0, new Pawn(true));
        cells[1][1] = new Square(0,1,new Pawn(true));
        cells[1][2] = new Square(0,2, new Pawn(true));
        cells[1][3] = new Square(0,3, new Pawn(true));
        cells[1][4] = new Square(0,4, new Pawn(true));
        cells[1][5] = new Square(0,5, new Pawn(true));
        cells[1][6] = new Square(0,6, new Pawn(true));
        cells[1][7] = new Square(0,7, new Pawn(true));
	
	//setup Black Pawns
        cells[6][0] = new Square(0,0, new Pawn(false));
        cells[6][1] = new Square(0,1,new Pawn(false));
        cells[6][2] = new Square(0,2, new Pawn(false));
        cells[6][3] = new Square(0,3, new Pawn(false));
        cells[6][4] = new Square(0,4, new Pawn(false));
        cells[6][5] = new Square(0,5, new Pawn(false));
        cells[6][6] = new Square(0,6, new Pawn(false));
        cells[6][7] = new Square(0,7, new Pawn(false));

	//Remaining black pieces
        cells[7][0] = new Square(0,0, new Rook(false));
        cells[7][1] = new Square(0,1,new Knight(false));
        cells[7][2] = new Square(0,2, new Bishop(false));
        cells[7][3] = new Square(0,3, new King(false));
        cells[7][4] = new Square(0,4, new Queen(false));
        cells[7][5] = new Square(0,5, new Bishop(false));
        cells[7][6] = new Square(0,6, new Knight(false));
        cells[7][7] = new Square(0,7, new Rook(false));


	//set up remaining empty boxes
	for (int i = 2; i < 6; i++) {
	   for (int j = 0; j < 8; j++) {
		cells[i][j] = new Square(i,j,NULL);
	     }
	}


}
