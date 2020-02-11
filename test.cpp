#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

std::vector<int> vectint{1,2,3,4,5,6};
std::vector<bool> vectbool{true,false,true,false,true,false};
std::vector<int> vectint2{41,2,30};
std::vector<bool> vbool2{true,false,false};
std::vector<int> vint3{22,3,5,10};
std::vector<bool> vbool3{false,true,true,false};

TEST_CASE( "OddMask", "[OddMask]" ) {
    REQUIRE( OddMask(vectint) == vectbool);
    REQUIRE( OddMask(vectint2) == vbool2);
    REQUIRE( OddMask(vint3) == vbool3);
}
