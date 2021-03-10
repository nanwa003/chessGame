#ifndef _BOARD_CPP_
#define _BOARD_CPP_

#include <iostream>
#include "../header/Board.hpp"
#include "piece.cpp"
#include "pawn_piece.cpp"
#include "rook_piece.cpp"
#include "queen_piece.cpp"
#include "knight_piece.cpp"
#include "bishop_piece.cpp"
#include "king_piece.cpp"



Board::Board()
{
        initPieces();
}


void Board::Draw() {
        for (int i = 7; i >= 0; i--) {


            std::cout<< "   ";
            for(int j = 0; j < 8; j++) {
                std::cout<< "-----";
                }
            std::cout<< "-" << std::endl;

            std::cout<<i + 1<< "  ";
            for (int j = 0; j < 8; j++) {
                std::cout<< "| ";
                Piece *curr = cells[i][j].getPiece();
                if (curr != NULL) {
                    curr->Draw();
                } else {
                        std::cout << "  ";
                }
                std::cout<< " ";
         }
         std::cout <<"|"<< std::endl;
     }


    std::cout<< "   ";
     for (int i = 0; i < 8; i++) {
  std::cout<<"-----";
        }
        std::cout<< "-" << std::endl;


        std::cout << "   ";
        for (int i = 0; i < 8; i++) {
                std::cout << "  " << (char) (i + 97) << "  ";
        }
        std::cout << std::endl << std::endl;


}

void Board::initPieces()
{

        for(int i = 0; i <8; i++) {
           Position bPawnPos = {i,6};
           cells[bPawnPos.ypos][bPawnPos.xpos].setPiece(new Pawn(Black, bPawnPos));
           Position wPawnPos = {i,1};
           cells[wPawnPos.ypos][bPawnPos.xpos].setPiece(new Pawn(White, wPawnPos));
        }


         Position wKnightPos = {1,0};
         cells[wKnightPos.ypos][wKnightPos.xpos].setPiece(new Knight(White, wKnightPos));

        Position wKnightPos2 = {6,0};
        cells[wKnightPos2.ypos][wKnightPos2.xpos].setPiece(new Knight(White, wKnightPos2));

        Position bKnightPos = {1,7};
        cells[bKnightPos.ypos][bKnightPos.xpos].setPiece(new Knight(Black, bKnightPos));

        Position bKnightPos2 = {6,7};
        cells[bKnightPos2.ypos][bKnightPos2.xpos].setPiece(new Knight(Black, bKnightPos2));


        Position wRookPos = {0,0};
        cells[wRookPos.ypos][wRookPos.xpos].setPiece(new Rook(White, wRookPos));

        Position wRookPos2 = {7,0};
        cells[wRookPos2.ypos][wRookPos2.xpos].setPiece(new Rook(White, wRookPos2));

        Position bRookPos = {0,7};
        cells[bRookPos.ypos][bRookPos.xpos].setPiece(new Rook(Black, bRookPos));

        Position bRookPos2 = {7,7};
        cells[bRookPos2.ypos][bRookPos2.xpos].setPiece(new Rook(Black, bRookPos2));


        Position wBishopPos = {2,0};
        cells[wBishopPos.ypos][wBishopPos.xpos].setPiece(new Bishop(White, wBishopPos));

        Position wBishopPos2 = {5,0};
        cells[wBishopPos2.ypos][wBishopPos2.xpos].setPiece(new Bishop(White, wBishopPos2));

        Position bBishopPos = {2,7};
        cells[bBishopPos.ypos][bBishopPos.xpos].setPiece(new Bishop(Black, bBishopPos));

        Position bBishopPos2 = {5,7};
        cells[bBishopPos2.ypos][bBishopPos2.xpos].setPiece(new Bishop(Black, bBishopPos2));


        Position wKingPos = {4,0};
        cells[wKingPos.ypos][wKingPos.xpos].setPiece(new King(White, wKingPos));

        Position bKingPos = {4,7};
        cells[bKingPos.ypos][bKingPos.xpos].setPiece(new King(Black, bKingPos));


        Position wQueenPos = {3,0};
        cells[wQueenPos.ypos][wQueenPos.xpos].setPiece(new Queen(White, wQueenPos));

        Position bQueenPos = {3,7};
        cells[bQueenPos.ypos][bQueenPos.xpos].setPiece(new Queen(Black, bQueenPos));




}

bool Board::movePiece(Position pos1, Position pos2) {

        bool moveIsDone = false;
        Piece *thisPiece = cells[pos1.ypos][pos1.xpos].getPiece();

         if (thisPiece != NULL && thisPiece->validateMove(pos2) && isWithinBoard(pos2)) {
                thisPiece->setPos(pos2);
                cells[pos2.ypos][pos2.xpos].setPiece(thisPiece);
                cells[pos1.ypos][pos1.xpos].Clear();

                moveIsDone = true;
    }
        return moveIsDone;
}

Piece* Board::GetPiece(Position pieceAtPos) {
    return cells[pieceAtPos.ypos][pieceAtPos.xpos].getPiece();
}

bool Board::isWithinBoard(Position p) {

    if ((0 <= p.xpos && p.xpos <= 7) && (0 <= p.ypos && p.ypos <= 7)) {
        return true;
    }

    return false;

}

#endif

