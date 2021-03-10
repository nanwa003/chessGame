
#include "gtest/gtest.h"
//#include "bisiopTest.hpp"
//#include "kingTest.hpp"
//#include "pieceTest.hpp"
//#include "boardTest.hpp"
#include "../src/Board.cpp"
#include "../src/piece.cpp"
#include "piece_test.hpp"
#include "validateMoveTests.hpp"

 Board cells;

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

