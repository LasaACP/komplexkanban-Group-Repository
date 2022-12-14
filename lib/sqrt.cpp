#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex sqrt(const complex c){
  complex output = pow(c,0.5);
  return output;
}