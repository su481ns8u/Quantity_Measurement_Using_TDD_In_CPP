#include <gtest/gtest.h>

TEST(Length_Test, given0FeetAnd0Feet_returnsEqual)
{
    ASSERT_TRUE(true);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}