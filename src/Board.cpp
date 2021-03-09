// implementation file for Board.hpp

#include <iostream>
#include "../header/Board.hpp"
#include "Piece.cpp"
#include "Pawn.cpp"
#include "Rook.cpp"
#include "Queen.cpp"
#include "Knight.cpp"
#include "Bishop.cpp"
#include "King.cpp"


//default constructor
Board::Board()
{
	InitPieces();
}

//draw an 8x8 chess board on console
void Board::Draw() {
	for (int i = 7; i >= 0; i++) {
	//Horizontal Borders
	     
	    std::cout<< "   ";
	    for(int j = 0; j < 8; j++) {
		std::cout<< "-----";
		}
	    std::cout<< "-" << endl;
   	// Set Vertical Borders and names of the Chess Pieces
	    std::cout<<i + 1<< "  ";
	    for (int i = 0; i < 8; i++) {
		std::cout<< "| ";
		Piece *currPiece = cells[i][j];
		if (currPiece != NULL) {
		    curr->Draw();
		} else {
			std::cout << "  ";
		}
		std::cout<< " ";
	 }
	 std::cout<<"|"<<endl;
     }
	
     //set Horizontal Divider for the last Row
     cout<< "   ";
     for (int i = 0; i < 8; i++) {
	 std::cout<<"-----";
	}
	std::cout<< "-" << endl;
	
	//labeling the columns with respective letters
	cout << "   ";
    	for (int col = 0; col < 8; col++) {
        	std::cout << "  " << (char) (col + 97) << "  ";
    	}
    	std::cout << endl << endl;


} 

void Board::initPieces()
{	
	//set up the pawns
	for(int i = 0; int i <8; i++) {
	   Position bPawnPos = {col,6};
           board[bPawnPos.ypos][bPawnPos.xpos].SetPiece(new Pawn(Black, bPawnPos));	
	   Position wPawnPos = {col,1};
           board[wPawnPos.ypos][bPawnPos.xpos].SetPiece(new Pawn(White, wPawnPos)); 
	}
	
	//set up the knights
	 Position wKnightPos = {1,0};
   	 board[wKnightPos.ypos][wKnightPos.xpos].SetPiece(new Knight(White, wKnightPos));

    	Position wKnightPos2 = {6,0};
    	board[wKnightPos2.ypos][wKnightPos2.xpos].SetPiece(new Knight(White, wKnightPos2));

    	Position bKnightPos = {1,7};
    	board[bKnightPos.ypos][bKnightPos.xpos].SetPiece(new Knight(Black, bKnightPos));

    	Position bKnightPos2 = {6,7};
    	board[bKnightPos2.ypos][bKnightPos2.xpos].SetPiece(new Knight(Black, bKnightPos2));	
	//setup the Rooks
	Position wRookPos = {0,0};
   	board[wRookPos.ypos][wRookPos.xpos].SetPiece(new Rook(White, wRookPos));

   	Position wRookPos2 = {7,0};
   	board[wRookPos2.ypos][wRookPos2.xpos].SetPiece(new Rook(White, wRookPos2));
    
    	Position bRookPos = {0,7};
    	board[bRookPos.ypos][bRookPos.xpos].SetPiece(new Rook(Black, bRookPos));

    	Position bRookPos2 = {7,7};
    	board[bRookPos2.ypos][bRookPos2.xpos].SetPiece(new Rook(Black, bRookPos2));
	
	//set up the bishops
	Position wBishopPos = {2,0};
   	board[wBishopPos.ypos][wBishopPos.xpos].SetPiece(new Bishop(White, wBishopPos));

    	Position wBishopPos2 = {5,0};
   	board[wBishopPos2.ypos][wBishopPos2.xpos].SetPiece(new Bishop(White, wBishopPos2));

    	Position bBishopPos = {2,7};
    	board[bBishopPos.ypos][bBishopPos.xpos].SetPiece(new Bishop(Black, bBishopPos));

    	Position blackBishopPos2 = {5,7}; 
    	board[bBishopPos2.ypos][bBishopPos2.xpos].SetPiece(new Bishop(Black, bBishopPos2));
	
	//set up kings
    	Position wKingPos = {4,0};
    	board[wKingPos.ypos][wKingPos.xpos].SetPiece(new King(White, wKingPos));

    	Position bKingPos = {4,7};
    	board[bKingPos.ypos][bKingPos.xpos].SetPiece(new King(Black, bKingPos));

	//set up queens
    	Position bQueenPos = {3,0};
    	board[bQueenPos.ypos][bQueenPos.xpos].SetPiece(new Queen(Black, bQueenPos));

    	Position bQueenPos2 = {3,7};
    	board[bQueenPos2.ypos][bQueenPos2.xpos].SetPiece(new Queen(White, bQueenPos2));	

	


}

bool Board::movePiece(Position pos1, Position pos2) {
	
	bool moveIsDone = false;
	Piece *thisPiece = board[pos1.ypos][pos2.xpos].GetPiece();
	
	//check if move is valid
	 if (origPiece != NULL && origPiece->ValidateMove(pos2) && IsWithinBoard(pos2)) {
   		thisPiece->SetPosition(pos2);
        	board[pos2.ypos][pos2.xpos].SetPiece(thisPiece);
        	board[fromPos.ypos][fromPos.xpos].Clear();

        	moveIsDone = true;
    }
Piece* Board::GetPiece(Position pieceAtPos) {
    return cells[pieceAtPos.ypos][pieceAtPos.xpos].GetPiece();
}

bool Board::isWithinBoard(Position p) {

    if ((0 <= p.xpos && p.xpos <= 7) && (0 <= p.ypos && p.ypos <= 7)) {
        return true;
    }

    return false;

}

#endif




