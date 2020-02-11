#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <string>
#include <iostream>
#include "functions_to_implement.cpp"


//Sum
TEST_CASE( "List Sums are computed", "[Sum]" ) {
	vector<int> arr;
	REQUIRE(Sum(arr) == 0);
	arr.push_back(0);
	REQUIRE(Sum(arr) == 0);
	arr.push_back(5);
	REQUIRE(Sum(arr) == 5);
	arr.push_back(5);
	REQUIRE(Sum(arr) == 10);
}


//Product
TEST_CASE( "List Products are computed", "[Product]" ) {
	vector<int> arr;
	REQUIRE(Product(arr) == 1);
	arr.push_back(1);
	REQUIRE(Product(arr) == 1);
	arr.push_back(5);
	REQUIRE(Product(arr) == 5);
	arr.push_back(5);
	REQUIRE(Product(arr) == 25);
	arr.push_back(0);
	REQUIRE(Product(arr) == 0);
}
