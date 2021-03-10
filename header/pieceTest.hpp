#ifndef __PIECE_TEST_HPP__
#define __PIECE_TEST_HPP__



#include "../header/Board.hpp"
#include "../header/pawn_piece.hpp"
#include "../header/king_piece.hpp"
#include "../header/rook_piece.hpp"
#include "../header/Square.hpp"
#include <algorithm>


TEST(PieceTest, MoveWouldCauseCheckmate) {
    Board &b = Board::get();
    King* wk = new King(WHITE, Square(7, 7));
    King* bk = new King(BLACK, Square(0, 0));
b.placePiece(wr, wr->getLocation());
b.placePiece(br, br->getLocation());
b.placePiece(wk, wk->getLocation());
b.placePiece(bk, bk->getLocation());
b.setKings(wk, bk);

EXPECT_TRUE(wr->moveWouldCauseCheckmate(Square(5, 6)));
EXPECT_FALSE(wr->moveWouldCauseCheckmate(Square(0, 7)));
EXPECT_FALSE(wr->moveWouldCauseCheckmate(Square(6, 7))); 
EXPECT_FALSE(br->moveWouldCauseCheckmate(Square(0, 6))); 
EXPECT_FALSE(br->moveWouldCauseCheckmate(Square(5, 7))); 

b.clearBoard();
}
TEST(PieceTest, pawnMoveSelfIntoCheck) { 
    Board &b = Board::get();
    King *wk = new King(WHITE, Square(7,5));
    King *bk = new King(BLACK, Square(0,0));
    Pawn *wp = new Pawn(WHITE, Square(5,5));
    Rook *br = new Rook(BLACK, Square(0,5));
    b.placePiece(wk, wk->getLocation());
    b.placePiece(bk, bk->getLocation());
    b.placePiece(wp, wp->getLocation());
    b.placePiece(br, br->getLocation());
    b.setKings(wk, bk);
    vector<Square> moves = wp->possibleMoves();
    EXPECT_EQ(moves.size(), 0);
    b.clearBoard();
}
TEST(PieceTest, bishopMoveSelfIntoCheck) { 
    Board &b = Board::get();
    King *wk = new King(WHITE, Square(7,7));
    King *bk = new King(BLACK, Square(0,0));
    Bishop *wb = new Bishop(WHITE, Square(6,7));
    Rook *br = new Rook(BLACK, Square(0,7));
    b.placePiece(wk, wk->getLocation());
    b.placePiece(bk, bk->getLocation());
    b.placePiece(wb, wb->getLocation());
    b.placePiece(br, br->getLocation());
    b.setKings(wk, bk);
    vector<Coord> moves = wb->possibleMoves();
    EXPECT_EQ(moves.size(), 0);
    b.clearBoard();
}
TEST(PieceTest, rookMoveSelfIntoCheck) { 
    Board &b = Board::get();
    King *wk = new King(WHITE, Square(7,7));
    King *bk = new King(BLACK, Square(0,0));
    Rook *wb = new Rook(WHITE, Square(6,7));
    Rook *br = new Rook(BLACK, Square(0,7));
    b.placePiece(wk, wk->getLocation());
    b.placePiece(bk, bk->getLocation());
    b.placePiece(wb, wb->getLocation());
    b.placePiece(br, br->getLocation());
    b.setKings(wk, bk);
    vector<Square> expectedMoves = {Square(0,7),Square(1,7), Square(2,7), Square(3,7), Square(4,7), Square(5,7)};
    vector<Square> moves = wb->possibleMoves();
    EXPECT_EQ(moves.size(), 6);
    while (!expectedMoves.empty()) {
        auto i = std::find(moves.begin(), moves.end(), expectedMoves.back());
        EXPECT_TRUE(i != moves.end());
        expectedMoves.pop_back();
    }

    b.clearBoard();
}
TEST(PieceTest, queenMoveSelfIntoCheck) { 
    Board &b = Board::get();
    King *wk = new King(WHITE, Square(7,7));
    King *bk = new King(BLACK, Square(0,0));
    Queen *wb = new Queen(WHITE, Square(6,7));
    Rook *br = new Rook(BLACK, Square(0,7));
    b.placePiece(wk, wk->getLocation());
    b.placePiece(bk, bk->getLocation());
    b.placePiece(wb, wb->getLocation());
    b.placePiece(br, br->getLocation());
    b.setKings(wk, bk);
    vector<Square> expectedMoves = {Square(0,7), Square(1,7), Square(2,7), Square(3,7), Square(4,7), Square(5,7)};
    vector<> moves = wb->possibleMoves();
    EXPECT_EQ(moves.size(), 6);
    while (!expectedMoves.empty()) {
        auto i = std::find(moves.begin(), moves.end(), expectedMoves.back());
        EXPECT_TRUE(i != moves.end());
        expectedMoves.pop_back();
    }

    b.clearBoard();
}
TEST(PieceTest, knightMoveSelfIntoCheck) { 
    Board &b = Board::get();
    King *wk = new King(WHITE, Square(7,7));
    King *bk = new King(BLACK, Square(0,0));
    Knight *wb = new Knight(WHITE, Square(6,7));
    Rook *br = new Rook(BLACK, Square(0,7));
    b.placePiece(wk, wk->getLocation());
    b.placePiece(bk, bk->getLocation());
    b.placePiece(wb, wb->getLocation());
    b.placePiece(br, br->getLocation());
    b.setKings(wk, bk);
    vector<Square> moves = wb->possibleMoves();
    EXPECT_EQ(moves.size(), 0);

    b.clearBoard();
}
#endif
