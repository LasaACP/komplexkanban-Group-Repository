/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
#include "../include/complex.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 1);
}

TEST_CASE("Addition", "[Complex]")
{
  cout << "Running tests on addition:" << endl;
  REQUIRE(complex(1,2) + complex(4,5) == complex(5,7));
  REQUIRE(complex(1,2) + 2 == complex(3,2));
  REQUIRE(complex(1,2) + complex(0,0) == complex(1,2));
}

TEST_CASE("Subtraction", "[Complex]")
{
  cout << "Running tests on subtraction" << endl;
  REQUIRE(complex(1,2) - complex(4,5) == complex(-3,-3));
  REQUIRE(complex(1,2) - 2 == complex(-1,2));
  REQUIRE(complex(1,2) - complex(0,0) == complex(1,2));
}

TEST_CASE("Multiplication", "[Complex]")
{
  cout << "Running tests on multiplication" << endl;
  REQUIRE(complex(1,2) * complex(4,5) == complex(-6,13));
  REQUIRE(complex(1,2) * 2 == complex(2,4));
  REQUIRE(complex(1,2) * complex(0,0) == complex(0,0));
}

TEST_CASE("Division", "[Complex]")
{
  cout << "Running tests on division" << endl;
  REQUIRE(complex(20,-4) / complex(3,2) == complex(4,-4));
  REQUIRE(complex(1,2) / 2 == complex(0.5,1));
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
