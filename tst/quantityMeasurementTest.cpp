#include <gtest/gtest.h>
#include "../src/Feet.hpp"

TEST(Length_Test, given0FeetAnd0Feet_returnsEqual)
{
    Feet feet_1(0);
    Feet feet_2(0);
    ASSERT_EQ(feet_1, feet_2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}