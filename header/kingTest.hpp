#include <algorithm>

TEST(KingTest, createNewKing) { // NOLINT(cert-err58-cpp)
    King* king1 = new King(WHITE, Coord(2, 3));

    EXPECT_EQ(king1->getSymbol(), "K");
    EXPECT_EQ(king1->getValue(), 100);
    EXPECT_EQ(king1->getTeam(), 0);
    EXPECT_EQ(king1->getLocation().stringify(), "(2,3)");

    King* king2 = new King(BLACK, Coord(8, 8));

    EXPECT_EQ(king2->getSymbol(), "K");
    EXPECT_EQ(king2->getValue(), 100);
    EXPECT_EQ(king2->getTeam(), 1);
    EXPECT_EQ(king2->getLocation().stringify(), "(8,8)");
}

TEST(KingTest, kingMovesByBoardBorder) {
  Board &b = Board::get();
King *king1 = new King(WHITE, Coord(0, 3));
b.placePiece(king1, king1->getLocation());
std::vector<Coord> king1Moves = king1->possibleMoves();

EXPECT_EQ(king1Moves.size(),5);
   EXPECT_EQ(king1Moves[0].stringify(),"(0,2)"); // 1 north
    EXPECT_EQ(king1Moves[1].stringify(),"(1,2)"); // 1 east, 1 north
    EXPECT_EQ(king1Moves[2].stringify(),"(1,3)"); // 1 east
    EXPECT_EQ(king1Moves[3].stringify(),"(0,4)"); // 1 south
    EXPECT_EQ(king1Moves[4].stringify(),"(1,4)"); // 
 b.clearBoard();
}
TEST(KingTest, kingNoMoves) {
 Board &b = Board::get();
    b.clearBoard();
King *king1 = new King(WHITE, Coord(0, 0));
    b.placePiece(king1, king1->getLocation());
Pawn *pawn1 = new Pawn(WHITE, Coord(1,0));
    b.placePiece(pawn1, pawn1->getLocation());
 Pawn *pawn2 = new Pawn(WHITE, Coord(1,1));
    b.placePiece(pawn2, pawn2->getLocation());
 Pawn *pawn3 = new Pawn(WHITE, Coord(0,1));
    b.placePiece(pawn3, pawn3->getLocation());
std::vector<Coord> king1Moves = king1->possibleMoves();
EXPECT_EQ(king1Moves.size(),0);
 b.clearBoard();
}
