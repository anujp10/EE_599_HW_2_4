#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapShould_1, SwapReturn_1) {
  Solution solution;
  int expected = 10, expected2 = 15;
  int actual = 15, actual2 = 10;
  solution.swap_by_reference(expected, expected2);
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected2, actual2);
}

TEST(SwapShould_2, SwapReturn_2) {
  Solution solution;
  int expected = 10, expected2 = 15;
  int actual = 15, actual2 = 10;
  solution.swap_by_pointers(&expected, &expected2);
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected2, actual2);
}