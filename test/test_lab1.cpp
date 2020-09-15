#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_NEAR(1.0, calc(1.0), 0.000001);
}

TEST(task1, test2)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);
}

TEST(task1, test3)
{
	ASSERT_NEAR(1.732051, calc(3.0), 0.000001);
}

TEST(task1, test4)
{
	ASSERT_DOUBLE_EQ(4.0, average(5.0, 3.0));
}

TEST(task1, test5)
{
	ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));
}

TEST(task1, test6)
{
	ASSERT_DOUBLE_EQ(7.0, average(6.0, 8.0));
}

TEST(task1, test7)
{
	ASSERT_TRUE(good(11.0, 121.0));
}

TEST(task1, test8)
{
	ASSERT_FALSE(good(12.0, 10.0));
}

TEST(task1, test9)
{
	ASSERT_DOUBLE_EQ(2.0, improve(3.0, 3.0));
}

TEST(task1, test10)
{
	ASSERT_DOUBLE_EQ(3.0, iter(3.0, 9.0));
}
