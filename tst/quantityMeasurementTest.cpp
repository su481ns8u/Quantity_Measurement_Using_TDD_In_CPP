#include <gtest/gtest.h>
#include "../src/Quantity.hpp"

TEST(Length_Test, given0FeetAnd0Feet_returnsEqual)
{
    Quantity feet_1(Unit::FEET, 0);
    Quantity feet_2(Unit::FEET, 0);
    ASSERT_EQ(feet_1, feet_2);
}

TEST(Length_Test, given0feetAndNull_shouldReturnNotEqual)
{
    Quantity *feet_1 = new Quantity(Unit::FEET, 0);
    Quantity *feet_2 = new Quantity(Unit::FEET, NULL);
    ASSERT_NE(feet_1, feet_2);
}

TEST(Length_Test, givenSameReferanceOfObject_shouldReturnEqual)
{
    Quantity *feet_1 = new Quantity(Unit::FEET, 0);
    Quantity *feet_2 = feet_1;
    ASSERT_EQ(feet_1, feet_2);
}

TEST(Length_Test, givenTwoSameUnitsWithDifferentValues_shouldReturnNotEqual)
{
    Quantity feet_1(Unit::FEET, 0);
    Quantity feet_2(Unit::FEET, 1);
    ASSERT_FALSE(feet_1 == feet_2);
}

TEST(Length_Test, given0InchAnd0Inch_WhenCheckedEqual_ShouldReturnTrue)
{
    Quantity inch_1(Unit::INCH, 0);
    Quantity inch_2(Unit::INCH, 0);
    ASSERT_EQ(inch_1, inch_2);
}

TEST(Length_Test, given0inchAndNullInch_whenCheckedForEquality_ShouldReturnFalse)
{
    Quantity inch_1(Unit::INCH, 0);
    ASSERT_FALSE(inch_1 == nullptr);
}

TEST(Length_Test, givenReferancesToSameObject_WhenCompared_ReturnsEqual)
{
    Quantity *inch_1 = new Quantity(Unit::INCH, 0);
    Quantity *inch_2 = inch_1;
    ASSERT_EQ(inch_1, inch_2);
}

TEST(Length_Test, givenTwoLengthWithSameTypeAndDifferentValues_whenCompared_ReturnFalse)
{
    Quantity inch1(Unit::INCH, 1);
    Quantity inch2(Unit::INCH, 2);
    ASSERT_FALSE(inch1 == inch2);
}

TEST(Length_Test, given0FeetAnd0Inch_WhenCompared_ReturnsTrue)
{
    Quantity feet(Unit::FEET, 0.0);
    Quantity inch(Unit::INCH, 0.0);
    ASSERT_TRUE(feet.compare(inch));
}

TEST(Length_Test, given1feetAnd1inch_WhenCompared_ReturnFalse)
{
    Quantity feet(Unit::FEET, 1.0);
    Quantity inch(Unit::INCH, 1.0);
    ASSERT_FALSE(feet.compare(inch));
}

TEST(Length_Test, given1feetAnd12Inch_WhenComapred_ReturnTrue)
{
    Quantity feet(Unit::FEET, 1.0);
    Quantity inch(Unit::INCH, 12.0);
    ASSERT_TRUE(feet.compare(inch));
}

TEST(Length_Test, given3feetAnd1Yard_whenCompared_returnTrue)
{
    Quantity feet(Unit::FEET, 3.0);
    Quantity yard(Unit::YARD, 1.0);
    ASSERT_TRUE(feet.compare(yard));
}

TEST(Length_Test, given1feetAnd1Yard_whenCompared_returnFalse)
{
    Quantity feet(Unit::FEET, 1.0);
    Quantity yard(Unit::YARD, 1.0);
    ASSERT_FALSE(feet.compare(yard));
}

TEST(Length_Test, given1inchAnd1Yard_whenCompared_returnFalse)
{
    Quantity inch(Unit::INCH, 1.0);
    Quantity yard(Unit::YARD, 1.0);
    ASSERT_FALSE(inch.compare(yard));
}

TEST(Length_Test, given36inchAnd1Yard_whenCompared_returnTrue)
{
    Quantity inch(Unit::INCH, 36.0);
    Quantity yard(Unit::YARD, 1.0);
    ASSERT_TRUE(inch.compare(yard));
}

TEST(Length_Test, given5cmAnd2inch_whenCompared_returnsTrue)
{
    Quantity cm(Unit::CM, 5);
    Quantity inch(Unit::INCH, 2);
    ASSERT_TRUE(inch.compare(cm));
}

TEST(Length_Test, given2inchAnd2inch_whenAdded_returnsResult)
{
    Quantity inch1(Unit::INCH, 2.0);
    Quantity inch2(Unit::INCH, 2.0);
    ASSERT_EQ(4.0, inch1 + inch2);
}

TEST(Length_Test, given1ftAnd2inch_whenAdded_returnsResult)
{
    Quantity feet(Unit::FEET, 1.0);
    Quantity inch(Unit::INCH, 2.0);
    ASSERT_EQ(14.0, feet + inch);
}

TEST(Length_Test, given1ftAnd1ft_whenAdded_returnsResult)
{
    Quantity feet1(Unit::FEET, 1.0);
    Quantity feet2(Unit::FEET, 1.0);
    ASSERT_EQ(24.0, feet1 + feet2);
}

TEST(Length_Test, given2inchAnd5by2cm_whenAdded_returnsResult)
{
    Quantity cm(Unit::CM, 2.5);
    Quantity inch(Unit::INCH, 2.0);
    ASSERT_EQ(3.0, cm + inch);
}

TEST(Volume_Test, given1GallonAnd3point78Liters_whenComapred_returnsTrue)
{
    Quantity gallon(Unit::GALLON, 1.0);
    Quantity litre(Unit::LITRE, 3.78);
    ASSERT_TRUE(litre.compare(gallon));
}

TEST(Volume_Test, given1LitreAnd1000ml_whenComapred_returnsTrue)
{
    Quantity litre(Unit::LITRE, 1.0);
    Quantity ml(Unit::ML, 1000.0);
    ASSERT_TRUE(litre.compare(ml));
}

TEST(Volume_Test, given1GallonAnd3point78Liters_whenAdded_returnsResult)
{
    Quantity gallon(Unit::GALLON, 1.0);
    Quantity litre(Unit::LITRE, 3.78);
    ASSERT_EQ(7.56, gallon + litre);
}

TEST(Volume_Test, given1LitreAnd1000ml_whenAdded_returnsResult)
{
    Quantity litre(Unit::LITRE, 1.0);
    Quantity ml(Unit::ML, 1000.0);
    ASSERT_EQ(2.0, litre + ml);
}

TEST(Weight_Test, given1KgAnd1000Grams_whenCompared_returnsTrue)
{
    Quantity kg(Unit::KG, 1.0);
    Quantity grams(Unit::GRAM, 1000);
    ASSERT_TRUE(kg.compare(grams));
}

TEST(Weight_Test, given1000KgAnd1Ton_whenCompared_returnsTrue)
{
    Quantity kg(Unit::KG, 1000.0);
    Quantity tonne(Unit::TONNE, 1.0);
    ASSERT_TRUE(kg.compare(tonne));
}

TEST(Weight_Test, given1TonneAnd1000Grams_whenAdded_returnsResult)
{
    Quantity grams(Unit::GRAM, 1000.0);
    Quantity tonne(Unit::TONNE, 1.0);
    ASSERT_EQ(1001.0, grams + tonne);
}

TEST(Temperature_Test, given212FAnd100C_whenCompared_returnsTrue)
{
    Quantity far(Unit::FAHREANHEAT, 212.0);
    Quantity cel(Unit::CELSIUS, 100.0);
    ASSERT_TRUE(far.compare(cel));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}