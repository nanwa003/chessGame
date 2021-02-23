#include "gtest/gtest.h"
#include "../src/pawn_piece.cpp"
#include "../src/piece.cpp"

TEST(PieceTest, testCapture)
{	
	Piece * temp = new Pawn(2, 2);
	
	pos dest;
	dest.x = 2;
	dest.y = 2;
	dest.occupied = true;
	
	EXPECT_TRUE(temp->capture(dest));
	delete temp;
}

TEST(PieceTest, testCaptureFailed)
{
        Piece * temp = new Pawn(2, 2);

        pos dest;
        dest.x = 2;
        dest.y = 2;
        dest.occupied = false;

        EXPECT_FALSE(temp->capture(dest));
        delete temp;
}

