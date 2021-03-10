#include "../header/piece_test.hpp"
#include "gtest/gtest.h"
#include "../header/bishopTest.hpp"
#include "../header/kingTest.hpp"
#include "../header/pieceTest.hpp"
#include "../header/boardTest.hpp"
#include "../header/pieceTest.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

