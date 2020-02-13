#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

//Even-Odd-Mask-Tests
TEST_CASE( "EvenMask", "[masks]" ) {
  std::vector<int> int_vec = {2, 4};
  std::vector<bool> bool_vec {true, true};
  REQUIRE( EvenMask(int_vec) == bool_vec );
}
