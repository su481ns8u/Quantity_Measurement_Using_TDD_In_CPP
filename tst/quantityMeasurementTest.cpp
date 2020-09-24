#include <gtest/gtest.h>
#include "../src/Length.hpp"

TEST(Length_Test, given0FeetAnd0Feet_returnsEqual)
{
    Length feet_1(Unit::FEET, 0);
    Length feet_2(Unit::FEET, 0);
    ASSERT_EQ(feet_1, feet_2);
}

TEST(Length_Test, given0feetAndNull_shouldReturnNotEqual)
{
    Length *feet_1 = new Length(Unit::FEET, 0);
    Length *feet_2 = new Length(Unit::FEET, NULL);
    ASSERT_NE(feet_1, feet_2);
}

TEST(Length_Test, givenSameReferanceOfObject_shouldReturnEqual)
{
    Length *feet_1 = new Length(Unit::FEET, 0);
    Length *feet_2 = feet_1;
    ASSERT_EQ(feet_1, feet_2);
}

TEST(Length_Test, givenTwoSameUnitsWithDifferentValues_shouldReturnNotEqual)
{
    Length feet_1(Unit::FEET, 0);
    Length feet_2(Unit::FEET, 1);
    ASSERT_FALSE(feet_1 == feet_2);
}

TEST(Length_Test, given0InchAnd0Inch_WhenCheckedEqual_ShouldReturnTrue)
{
    Length inch_1(Unit::INCH, 0);
    Length inch_2(Unit::INCH, 0);
    ASSERT_EQ(inch_1, inch_2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}