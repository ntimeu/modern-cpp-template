#include <gtest/gtest.h>

#include <factorial/factorial>

namespace
{
TEST(FactorialTest, Factorial) {
	using factorial::factorial;

	EXPECT_EQ( 1, factorial(1) );
	EXPECT_EQ( 2, factorial(2) );
	EXPECT_EQ( 6, factorial(3) );
	EXPECT_EQ( 3628800, factorial(10) );
}

TEST(FactorialTest, ConstexprFactorial) {
	using factorial::cfactorial;

	EXPECT_EQ( 1, cfactorial(1) );
	EXPECT_EQ( 2, cfactorial(2) );
	EXPECT_EQ( 6, cfactorial(3) );
	EXPECT_EQ( 3628800, cfactorial(10) );
}
}
