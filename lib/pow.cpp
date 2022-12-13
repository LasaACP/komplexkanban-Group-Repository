#include <cmath>
#include "../include/complex.h"

complex pow(double b, const complex exp) {
  complex result = complex();
  result.re += (std::pow(b, exp.re) * std::cos(exp.im*std::log(b)));
  result.im += std::pow(b, exp.re) * std::sin(exp.im*std::log(b));
  return result;
}

complex pow(const complex b, int exp) {
  complex multiplier = complex(b.re, b.im);
  complex result = complex(b.re, b.im);
  for (int i = 0; i < exp-1; i++) {
    result = result*multiplier;
  }
  return result;
}

complex pow(const complex b, double exp) {
  double r = abs(b);
  double theta = arg(b);
  complex result = complex();
  result.re += (pow(r,exp)*cos(exp*theta));
  result.im += (pow(r,exp)*sin(exp*theta));
  return result;
}

complex pow(complex b, complex expo) {
    double r = abs(b);
    double theta = arg(b);
    complex result = complex();
    complex exponent = complex();
    complex i = complex(0,1);
    exponent = (log(r)*expo)+((i*theta)*expo);
    result = exp(exponent);
    return result;
}
