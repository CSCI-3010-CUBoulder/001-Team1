#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Matching Vectors", "[matchvectors]"){ // Tanner
    std::vector<int> a{1,2,3,4};
    std::vector<int> b{2,4,6,8};
    std::vector<int> c{1,3};
    std::vector<int> d{6,8};
    REQUIRE(MatchVectors(a, b) == c);
    REQUIRE(MatchVectors(b, a) == d);
}