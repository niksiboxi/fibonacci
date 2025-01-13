#include <gtest/gtest.h>
#include "src/fibonacci.h"

TEST(Fibonacci, BasicAssertions) {
    EXPECT_EQ(0, fibonacci(0));
    EXPECT_EQ(1, fibonacci(1));
    EXPECT_EQ(1, fibonacci(2));
    EXPECT_EQ(2, fibonacci(3));
    EXPECT_EQ(3, fibonacci(4));
    EXPECT_EQ(5, fibonacci(5));
    EXPECT_EQ(8, fibonacci(6));
    EXPECT_EQ(679891637638612258, fibonacci(87));
}
