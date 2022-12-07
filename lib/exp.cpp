#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex complex::exp(const complex){
  //e^ix=cosx+isinx
  complex imPart;
  imPart.re=cos(im);
  imPart.im=sin(im);
  return(pow(EULER, re) * imPart);
}