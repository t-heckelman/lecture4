#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include <stdio.h>
#include "functions_to_implement.cpp"
TEST_CASE("CHECK POSITIVE OR NEGATIVE", "[Sign]"){
	REQUIRE( Sign(-4) == -1);
	REQUIRE( Sign(-5) == -1);
	REQUIRE( Sign(-6) == -1);
	REQUIRE( Sign(1) == 1);
	REQUIRE( Sign(5) == 1);
	REQUIRE( Sign(2) == 1);
	REQUIRE( Sign(4) == 1);
	REQUIRE( Sign(3) == 1);
}
TEST_CASE("Multiplies all numbers in a vector together and returns the resulting value", "[Product]"){
	std::vector<int> v{1,2,3,4,5,6,7};
	std::vector<int> v2{1,2,3,4,5,6};
	std::vector<int> v3{1,2,3,4,5};
	REQUIRE(Product(v) == 5040);
	REQUIRE(Product(v2) == 720);
	REQUIRE(Product(v3) == 120);
}
TEST_CASE("Divide by two until can't", "[RemoveTwos]"){
	REQUIRE(RemoveTwos(2) == 1);
	REQUIRE(RemoveTwos(4) == 1);
	REQUIRE(RemoveTwos(3) == 3);
	REQUIRE(RemoveTwos(26) == 13);
	REQUIRE(RemoveTwos(52) ==13);
}