#include <gtest/gtest.h>

#define main h_main
#include "lab06_2iter.cpp"
#undef main

int Max(int* a, const int size);

TEST(MaxTest, FindMaxEvenElementIndex) {
    int a[] = {1, 4, 3, 8, 5};
    EXPECT_EQ(Max(a, 5), 3);
}
