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

TEST(Length_Test, given1feetAnd1inch_WhenCompared_ReturnFalse)
{
    Length feet(Unit::FEET, 1.0);
    Length inch(Unit::INCH, 1.0);
    ASSERT_FALSE(feet.compare(inch));
}

TEST(Length_Test, given1feetAnd12Inch_WhenComapred_ReturnTrue)
{
    Length feet(Unit::FEET, 1.0);
    Length inch(Unit::INCH, 12.0);
    ASSERT_TRUE(feet.compare(inch));
}

TEST(Length_Test, given3feetAnd1Yard_whenCompared_returnTrue)
{
    Length feet(Unit::FEET, 3.0);
    Length yard(Unit::YARD, 1.0);
    ASSERT_TRUE(feet.compare(yard));
}

TEST(Length_Test, given1feetAnd1Yard_whenCompared_returnFalse)
{
    Length feet(Unit::FEET, 1.0);
    Length yard(Unit::YARD, 1.0);
    ASSERT_FALSE(feet.compare(yard));
}

TEST(Length_Test, given1inchAnd1Yard_whenCompared_returnFalse)
{
    Length inch(Unit::INCH, 1.0);
    Length yard(Unit::YARD, 1.0);
    ASSERT_FALSE(inch.compare(yard));
}

TEST(Length_Test, given36inchAnd1Yard_whenCompared_returnTrue)
{
    Length inch(Unit::INCH, 36.0);
    Length yard(Unit::YARD, 1.0);
    ASSERT_TRUE(inch.compare(yard));
}

TEST(Length_Test, given5cmAnd2inch_whenCompared_returnsTrue)
{
    Length cm(Unit::CM, 5);
    Length inch(Unit::INCH, 2);
    ASSERT_TRUE(inch.compare(cm));
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}