/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#define PI 3.1415926535897932384626433832795028841971
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../include/complex.h"
#include "../lib/abs.cpp"
#include "../lib/acos.cpp"
#include "../lib/arg.cpp"
#include "../lib/asin.cpp"
#include "../lib/atan.cpp"
#include "../lib/complex.cpp"
#include "../lib/compoundAssignment.cpp"
#include "../lib/conj.cpp"
#include "../lib/cos.cpp"
#include "../lib/cosh.cpp"
#include "../lib/exp.cpp"
#include "../lib/imag.cpp"
#include "../lib/log.cpp"
#include "../lib/log10.cpp"
#include "../lib/norm.cpp"
#include "../lib/operators.cpp"
#include "../lib/polar.cpp"
#include "../lib/pow.cpp"
#include "../lib/real.cpp"
#include "../lib/sin.cpp"
#include "../lib/sinh.cpp"
#include "../lib/sqrt.cpp"
#include "../lib/tan.cpp"
#include "../lib/tanh.cpp"

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

using namespace std;

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Addition", "[Complex]")
{
  cout << "Running tests on addition:" << endl;
  REQUIRE(((complex(1,2) + complex(4,5)) == complex(5,7)) == true);
  REQUIRE((complex(1,2) + 2 == complex(3,2)) == true);
  REQUIRE((complex(1,2) + complex(0,0) == complex(1,2)) == true);
}

TEST_CASE("Subtraction", "[Complex]")
{
  cout << "Running tests on subtraction" << endl;
  REQUIRE((complex(1,2) - complex(4,5) == complex(-3,-3)) == true);
  REQUIRE((complex(1,2) - 2 == complex(-1,2)) == true);
  REQUIRE((complex(1,2) - complex(0,0) == complex(1,2)) == true);
}

TEST_CASE("Multiplication", "[Complex]")
{
  cout << "Running tests on multiplication" << endl;
  REQUIRE((complex(1,2) * complex(4,5) == complex(-6,13)) == true);
  REQUIRE((complex(1,2) * 2 == complex(2,4)) == true);
  REQUIRE((complex(1,2) * complex(0,0) == complex(0,0)) == true);
}

TEST_CASE("Division", "[Complex]")
{
  cout << "Running tests on division" << endl;
  REQUIRE((complex(20,-4) / complex(3,2) == complex(4,-4)) == true);
  REQUIRE((complex(1,2) / 2 == complex(0.5,1)) == true);
}

TEST_CASE("Real", "[Complex]")
{
  cout << "Running tests on real" << endl;
  complex c = complex(20,1);
  REQUIRE((c.real(c) == 20) == true);
}

TEST_CASE("Imag", "[Complex]")
{
  cout << "Running tests on imag" << endl;
  complex c = complex(20,1);
  REQUIRE((c.imag(c) == 1) == true);
}

TEST_CASE("Conj", "[Complex]")
{
  cout << "Running tests on conj" << endl;
  complex c = complex(20,1);
  complex answer = complex(20,-1);
  REQUIRE((c.conj(c)==answer) == true);
}

TEST_CASE("==", "[Complex]")
{
  cout << "Running tests on ==" << endl;
  complex c = complex(20,1);
  complex d = complex(20,1);
  complex e = complex(19,0);
  double f = 19;
  REQUIRE(((c==d)) == true);
  REQUIRE((!(c==e)) == true);
  REQUIRE((e==f) == true);
  REQUIRE((f==e) == true);
}

TEST_CASE("!=", "[Complex]")
{
  cout << "Running tests on !=" << endl;
  complex c = complex(20,1);
  complex d = complex(20,1);
  complex e = complex(19,0);
  double f = 18;
  REQUIRE(((c!=e)) == true);
  REQUIRE((!(c!=d)) == true);
  REQUIRE((e!=f) == true);
  REQUIRE((f!=e) == true);
}

TEST_CASE("Pow", "[Complex]")
{
  cout << "Running tests on Pow" << endl;
  complex c = complex(3,4);
  complex exponent = complex(2,4);
  complex answer = complex(-7,24);
  complex answer2 = complex(-7.4614966,2.8854927);
  complex answer3 = complex(-10.7973867,27.3083775);
  complex answer4 = complex(-0.2599533,0.5545326);
  REQUIRE((pow(c,2)==answer) == true);
  REQUIRE((pow(2,c)==answer2) == true);
  REQUIRE((pow(c,2.1)==answer3) == true);
  REQUIRE((pow(c,exponent)==answer4) == true);
}

TEST_CASE("Sine", "[Complex]")
{
  cout << "Running tests on sine:" << endl;
  REQUIRE((sin(complex(1,2)) == complex(3.16577851,1.95960104)) == true);
}

TEST_CASE("Cosine", "[Complex]")
{
  cout << "Running tests on cosine:" << endl;
  REQUIRE((cos(complex(1,2)) == complex(2.03272301,-3.0518978)) == true);
}

TEST_CASE("Tangent", "[Complex]")
{
  cout << "Running tests on tangent:" << endl;
  REQUIRE((tan(complex(1,2)) == complex(0.03381283,1.01479362)) == true);
}

TEST_CASE("Hyperbolic Sine", "[Complex]")
{
  cout << "Running tests on hyperbolic sine:" << endl;
  REQUIRE((sinh(complex(1,2)) == complex(-0.48905626,1.40311925)) == true);
}

TEST_CASE("Hyperbolic Cosine", "[Complex]")
{
  cout << "Running tests on hyperbolic cosine:" << endl;
  REQUIRE((cosh(complex(1,2)) == complex(-0.64214812,1.06860742)) == true);
}

TEST_CASE("Hyperbolic Tangent", "[Complex]")
{
  cout << "Running tests on hyperbolic tangent:" << endl;
  REQUIRE((tanh(complex(1,2)) == complex(1.16673626,-0.2434582)) == true);
}

TEST_CASE("Inverse Sine", "[Complex]")
{
  cout << "Running tests on inverse sine:" << endl;
  REQUIRE((asin(complex(1,2)) == complex(0.42707859,1.52857092)) == true);
}

TEST_CASE("Inverse Cosine", "[Complex]")
{
  cout << "Running tests on inverse cosine:" << endl;
  REQUIRE((acos(complex(1,2)) == complex(1.14371774,-1.52857092)) == true);
}

TEST_CASE("Inverse Tangent", "[Complex]")
{
  cout << "Running tests on inverse tangent:" << endl;
  REQUIRE((atan(complex(1,2)) == complex(1.33897252,0.40235948)) == true);
}

TEST_CASE("Sqrt", "[Complex]")
{
  cout << "Running tests on sqrt:" << endl;
  REQUIRE((sqrt(complex(3,4)) == complex(2,1)) == true);
}

TEST_CASE("Log", "[Complex]")
{
  cout << "Running tests on log:" << endl;
  REQUIRE((log(complex(3,4)) == complex(1.60943791,0.927295218)) == true);
}

TEST_CASE("Log10", "[Complex]")
{
  cout << "Running tests on log10:" << endl;
  REQUIRE((log10(complex(3,4)) == complex(0.698970004,0.402719196)) == true);
}

TEST_CASE("Arg", "[Complex]")
{
  cout << "Running tests on arg:" << endl;
  REQUIRE((complex(arg(complex(3,4))) == complex(0.92729522)) == true);
}

TEST_CASE("Norm", "[Complex]")
{
  cout << "Running tests on norm:" << endl;
   REQUIRE((complex(norm(complex(1,2))) == complex(5)) == true);
}

TEST_CASE("Polar", "[Complex]")
{
  cout << "Running tests on polar:" << endl;
   REQUIRE((complex(polar(10, PI)) == complex(-10,0)) == true);
}

TEST_CASE("Abs", "[Complex]")
{
  cout << "Running tests on absolute value:" << endl;
   REQUIRE((abs(complex(3, 4)) == 5) == true);
}

TEST_CASE("Exp", "[Complex]")
{
  cout << "Running tests on exp:" << endl;
   REQUIRE(((complex(-13.1287831, -15.2007845)) == exp(complex(3,4))) == true);
}

TEST_CASE(">>", "[Complex]"){
  cout << "Running tests on >>:" << endl;
  complex c = complex();
  REQUIRE((c==complex(0,0)) == true);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN