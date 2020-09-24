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

TEST(Length_Test, given0inchAndNullInch_whenCheckedForEquality_ShouldReturnFalse)
{
    Length inch_1(Unit::INCH, 0);
    ASSERT_FALSE(inch_1 == nullptr);
}

TEST(Length_Test, givenReferancesToSameObject_WhenCompared_ReturnsEqual)
{
    Length *inch_1 = new Length(Unit::INCH, 0);
    Length *inch_2 = inch_1;
    ASSERT_EQ(inch_1, inch_2);
}

TEST(Length_Test, givenTwoLengthWithSameTypeAndDifferentValues_whenCompared_ReturnFalse)
{
    Length inch1(Unit::INCH, 1);
    Length inch2(Unit::INCH, 2);
    ASSERT_FALSE(inch1 == inch2);
}

TEST(Length_Test, given0FeetAnd0Inch_WhenCompared_ReturnsTrue)
{
    Length feet(Unit::FEET, 0.0);
    Length inch(Unit::INCH, 0.0);
    ASSERT_TRUE(feet.compare(inch));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}