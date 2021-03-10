#ifndef __BOARD_TEST.HPP
#define __BOARD_TEST.HPP
#include "gtest/gtest.h"
#include "../header/Board.hpp"
#include "../header/Square.hpp"
#include "../header/king_piece.hpp"
#include "../header/pawn_piece.hpp"
#include "../header/rook_piece.hpp"


TEST(BoardTest,  isWithinboard) {
Board b;
string thisPos = "a1";
Position p = convertToChessNotation(thisPos)
EXPECT_EQ(b.isWithinBoard(p), true)


}


TEST(BoardTest,  isWithinboard) {
Board b;
string thisPos = "p9";
Position p = convertToChessNotation(thisPos)
EXPECT_EQ(b.isWithinBoard(p), false)
}
#endif

