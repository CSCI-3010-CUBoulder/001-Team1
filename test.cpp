#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "EvenMask", "[masks]" ) {
    REQUIRE( EvenMask(std::vector<int>{2, 4}); == std::vector<bool> {true, true}; );
}

TEST_CASE( "OddMask", "[masks]" ) {
    REQUIRE( OddMask(std::vector<int>{2, 4}); == std::vector<bool> {false, false}; );

}
