#ifndef KINGTE_HPP
#define KING_HPP
#include "../header/king_piece.hpp"
#include "../header/Pawn_piece.hpp"
#include "../header/Square.hpp"
#include <algorithm>

TEST(KingTest, createNewKing) { 
    King* king1 = new King(WHITE, Square(2, 3));

    EXPECT_EQ(king1->getSymbol(), "K");
    EXPECT_EQ(king1->getValue(), 100);
    EXPECT_EQ(king1->getTeam(), 0);
    EXPECT_EQ(king1->getLocation().stringify(), "(2,3)");

    King* king2 = new King(BLACK, Square(8, 8));

    EXPECT_EQ(king2->getSymbol(), "K");
    EXPECT_EQ(king2->getValue(), 100);
    EXPECT_EQ(king2->getTeam(), 1);
    EXPECT_EQ(king2->getLocation().stringify(), "(8,8)");
}

TEST(KingTest, kingMovesByBoardBorder) {
Board &b = Board::get();
King *king1 = new King(WHITE, Square(0, 3));
b.placePiece(king1, king1->getLocation());
std::vector<Square> king1Moves = king1->possibleMoves();

EXPECT_EQ(king1Moves.size(),5);
   EXPECT_EQ(king1Moves[0].stringify(),"(0,2)"); 
    EXPECT_EQ(king1Moves[1].stringify(),"(1,2)"); 
    EXPECT_EQ(king1Moves[2].stringify(),"(1,3)"); 
    EXPECT_EQ(king1Moves[3].stringify(),"(0,4)"); 
    EXPECT_EQ(king1Moves[4].stringify(),"(1,4)");  
 b.clearBoard();
}
TEST(KingTest, kingNoMoves) {
 Board &b = Board::get();
    b.clearBoard();
King *king1 = new King(WHITE, Square(0, 0));
    b.placePiece(king1, king1->getLocation());
Pawn *pawn1 = new Pawn(WHITE, Square(1,0));
    b.placePiece(pawn1, pawn1->getLocation());
 Pawn *pawn2 = new Pawn(WHITE, Square(1,1));
    b.placePiece(pawn2, pawn2->getLocation());
 Pawn *pawn3 = new Pawn(WHITE, Square(0,1));
    b.placePiece(pawn3, pawn3->getLocation());
std::vector<Square> king1Moves = king1->possibleMoves();
EXPECT_EQ(king1Moves.size(),0);
 b.clearBoard();
}
#endif
