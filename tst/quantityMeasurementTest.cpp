#include <gtest/gtest.h>
#include "../src/Feet.hpp"

TEST(Length_Test, given0FeetAnd0Feet_returnsEqual)
{
    Feet feet_1(0);
    Feet feet_2(0);
    ASSERT_EQ(feet_1, feet_2);
}

TEST(Length_Test, given0feetAndNull_shouldReturnNotEqual)
{
    Feet *feet_1 = new Feet(0);
    Feet *feet_2 = new Feet(NULL);
    ASSERT_NE(feet_1, feet_2);
}

TEST(Length_Test, givenSameReferanceOfObject_shouldReturnEqual)
{
    Feet *feet_1 = new Feet(0);
    Feet *feet_2 = feet_1;
    ASSERT_EQ(feet_1, feet_2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}