#include "gtest/gtest.h"
#include "methods.h"

TEST(Complex, t1)
{
    Complex num1 = {1, 2};
    Complex num2 = {3, 4};
    Complex exp = num1 + num2;
    Complex res = {4, 6};
    EXPECT_TRUE(exp == res);
}

TEST(Complex, t2)
{
    Complex num1 = {1, 2};
    Complex num2 = {3, 4};
    Complex exp = num1 - num2;
    Complex res = {-2, -2};
    EXPECT_TRUE(exp == res);
}

TEST(Complex, t3)
{
    Complex num1 = {2, 2};
    Complex num2 = {3, 4};
    Complex exp = num1 * num2;
    Complex res = {-2, 14};
    EXPECT_TRUE(res == exp);
}

TEST(Complex, t4)
{
    Complex num1 = {15, 4};
    Complex num2 = {5, 8};
    Complex exp = num1 / num2;
    Complex res = {1.20, -1.12};
    EXPECT_TRUE(exp == res);
}

TEST(Complex, t5)
{
    Complex num1 = {3, 4};
    Complex num2 = {3, 4};
    Complex exp = num2 - num1 / num2;
    Complex res = {2, 4};
    EXPECT_TRUE(exp == res);
}

TEST(Complex, t6)
{
    Complex num1 = {3, 4};
    Complex num2 = {0, 0};
    EXPECT_THROW(num1 / num2, std::logic_error);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}