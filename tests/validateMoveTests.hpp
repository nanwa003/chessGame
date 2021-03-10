#ifndef _VALIDATEMOVETESTS_HPP_ 
#define _VALIDATEMOVETESTS_HPP_
#include "gtest/gtest.h"

//moveFunction calls validateTests

TEST (validateTests, pawnTrue)
{
	Position moveFrom =   {0,1};
	Position moveTo = {0, 2};
		
	EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, pawnFalse)
{
        Position moveFrom =   {0,1};
        Position moveTo = {2,2};
       
        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, knightTrue)
{
        Position moveFrom =  {1,0};
        Position moveTo = {2, 2};

        EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, knightFalse)
{
        Position moveFrom =   {1,0};
        Position moveTo = {0, 5};

        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, kingTrue)
{
	Position m1 = {4,1};
	Position m2 = {4,2};
	cells.movePiece(m1, m2);	
        Position moveFrom =   {4,0};
        Position moveTo = {4,1};

        EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, kingFalse)
{
	
        Position moveFrom = {4,0};
        Position moveTo = {4,1};

        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}


TEST (validateTests, rookTrue)
{
	Position m1 = {0,1};
        Position m2 = {0,2};
        cells.movePiece(m1, m2);
        Position moveFrom =   {0,0};
        Position moveTo = {0, 1};

        EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, rookFalse)
{
	
        Position moveFrom =   {0,};
        Position moveTo = {0, 1};

        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, bishopTrue)
{
	Position m1 = {3,1};
        Position m2 = {3,2};
        cells.movePiece(m1, m2);
        Position moveFrom =   {2,0};
        Position moveTo = {3,1};

        EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, bishopFalse)
{
        Position moveFrom =   {2,0};
        Position moveTo = {3,1};

        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, queenTrue)
{
	Position m1 = {4,1};
        Position m2 = {4,2};
        cells.movePiece(m1, m2);

        Position moveFrom =   {3,0};
        Position moveTo = {5,2};

        EXPECT_TRUE(cells.movePiece(moveFrom,moveTo));
}

TEST (validateTests, queenFalse)
{
        Position moveFrom =   {3,0};
        Position moveTo = {5,2};

        EXPECT_FALSE(cells.movePiece(moveFrom,moveTo));
}

#endif
