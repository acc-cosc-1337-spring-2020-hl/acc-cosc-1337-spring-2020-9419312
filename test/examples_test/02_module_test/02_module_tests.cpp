#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);

}
TEST_CASE("Test generation function")
{
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1977) == "Millenial");
	REQUIRE(get_generation(1946) == "Baby Boomer");
}

