#ifndef BISHIOP_HPP
#define BISHIOP_HPP
#include <iostream>
#include "gtest/gtest.h"
#include "../header/bishop_piece.hpp"
#include "../header/pawn_piece.hpp"
#include "../header/Square.hpp"

TEST(BishopTest, createNewBishop) {
auto *bishop1 = new Bishop(WHITE, Square(2, 3));
EXPECT_EQ(bishop1->getSymbol(), "B");
EXPECT_EQ(bishop1->getValue(), 25);
EXPECT_EQ(bishop1->getTeam(), 0);
EXPECT_EQ(bishop1->getLocation().stringify(), "(2,3)");

auto *bishop2 = new Bishop(BLACK, Square(8, 8));
EXPECT_EQ(bishop2->getSymbol(), "B");
EXPECT_EQ(bishop2->getValue(), 25);
EXPECT_EQ(bishop2->getTeam(), 1);
EXPECT_EQ(bishop2->getLocation().stringify(), "(8,8)");
}

TEST(BishopTest, bishopMoves) {
Board &b = Board::get();
b.clearBoard();
auto *bishop1 = new Bishop(WHITE, Square(3, 3));
std::vector<Square> bishop1Moves = bishop1->possibleMoves();
EXPECT_EQ(bishop1Moves.size(), 13);
b.clearBoard();
 }
#endif
