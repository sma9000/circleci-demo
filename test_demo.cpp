#include <gtest/gtest.h>

// Example test case
TEST(DemoTest, BasicAssertions) {
EXPECT_EQ(1 + 1, 2); // This test will pass ✅
EXPECT_TRUE(true);    // This test will also pass ✅
}

// Main function for Google Test
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
