#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex complex::log(const complex){
  complex output;
  output.re=log(re);
  output.im=arg(*this)+2*PI*abs(*this);
  return output;
}
