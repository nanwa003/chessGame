#ifndef _PIECE_TEST_HPP_
#define _PIECE_TEST_HPP_

#include "gtest/gtest.h"
//#include "../src/Board.cpp"
//#include "../src/piece.cpp"

#include <iostream>
#include <string>




TEST (pieceTest, pawnTest)
{
	std::string pos = "c2";

	Position move;
        move.xpos = (int) pos[0] - 97;
	move.ypos = atoi(&pos[1]) - 1;
	
	Pawn * p = new Pawn(White,move);
		
	EXPECT_EQ(p->getVal(), "P");
	delete p;
}

TEST (pieceTest, knightTest)
{
        std::string pos = "g1";

        Position move;
        move.xpos = (int) pos[0] - 97;
        move.ypos = atoi(&pos[1]) - 1;

        Knight * n = new Knight(White,move);

        EXPECT_EQ(n->getVal(), "N");
        delete n;
}

TEST (pieceTest, kingTest)
{
        std::string pos = "e1";

        Position move;
        move.xpos = (int) pos[0] - 97;
        move.ypos = atoi(&pos[1]) - 1;

        King * k = new King(White,move);

        EXPECT_EQ(k->getVal(), "K");
        delete k;
}

TEST (pieceTest, rookTest)
{
        std::string pos = "a1";

        Position move;
        move.xpos = (int) pos[0] - 97;
        move.ypos = atoi(&pos[1]) - 1;

        Rook * r = new Rook(White,move);

        EXPECT_EQ(r->getVal(), "R");
        delete r;
}

TEST (pieceTest, bishopTest)
{
        std::string pos = "d1";

        Position move;
        move.xpos = (int) pos[0] - 97;
        move.ypos = atoi(&pos[1]) - 1;

        Bishop * b = new Bishop(White,move);

        EXPECT_EQ(b->getVal(), "B");
        delete b;
}

TEST (pieceTest, queenTest)
{
        std::string pos = "f1";

        Position move;
        move.xpos = (int) pos[0] - 97;
        move.ypos = atoi(&pos[1]) - 1;

        Queen * q = new Queen(White,move);

        EXPECT_EQ(q->getVal(), "Q");
        delete q;
}
#endif
