#include <math.h>
#include "../include/complex.h"

complex pow(double b, const complex exp) {
  complex result = complex();
  result.re += (pow(b, exp.re) * cos(exp.im*log(b)));
  result.im += sin(exp.im*log(b));
  return result;
}

complex pow(const complex b, int exp) {
    complex result = complex(b.re, b.im);
    for (int i = 0; i < exp-1; i++) {
        result = result*result;
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

complex pow(complex b, complex exp) {
    double r = abs(b);
    double theta = arg(b);
    complex result = complex();
    complex exponent = complex();
    complex i = complex(0,1);
    exponent = (log(r)*exp)+((i*theta)*exp);
    result = exp(exponent);
    return result;
}

