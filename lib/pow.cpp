#include <math.h>
#include "../include/complex.h"

complex pow(double b, const complex exp) {
  complex result = complex();
  result.re += (pow(b, exp.re) * cos(exp.im*log(b)));
  result.im += sin(exp.im*log(b));
  return result;
}