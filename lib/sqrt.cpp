#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex complex::sqrt(const complex){
  complex output;
  output.re=sqrt( (abs(*this)+re) / 2 );
  output.im=(im/abs(im)) * sqrt( (abs(*this) - im) / 2);
  return output;
}