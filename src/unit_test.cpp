#include "../header/piece_test.hpp"
#include "gtest/gtest.h"
#include "../header/bishopTest.hpp"
#include "../header/kingTest.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

