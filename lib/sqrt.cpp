#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex sqrt(const complex com){
  complex output;
  output.re=sqrt( (abs(com)+com.re) / 2 );
  output.im=(com.im/abs(com.im)) * sqrt( (abs(com) - com.im) / 2);
  return output;
}