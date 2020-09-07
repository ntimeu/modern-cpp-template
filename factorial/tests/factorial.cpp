#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <factorial/factorial>

TEST_CASE ("Factorials are computed", "[factorial]") {
	using factorial::factorial;

	REQUIRE( factorial(1) == 1 );
	REQUIRE( factorial(2) == 2 );
	REQUIRE( factorial(3) == 6 );
	REQUIRE( factorial(10) == 3628800 );
}

TEST_CASE ("Constexpr factorials are computed", "[factorial]") {
	using factorial::cfactorial;

	REQUIRE( cfactorial(1) == 1 );
	REQUIRE( cfactorial(2) == 2 );
	REQUIRE( cfactorial(3) == 6 );
	REQUIRE( cfactorial(10) == 3628800 );
}
