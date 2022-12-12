#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex sqrt(const complex c){
  complex output;
  output.re=sqrt( (abs(c)+c.re) / 2 );
  output.im=(c.im/abs(c.im)) * sqrt( (abs(c) - c.im) / 2);
  return output;
}