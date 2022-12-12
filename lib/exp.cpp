#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex exp(const complex c){
  //e^ix=cosx+isinx
  complex imPart;
  imPart.re=cos(c.im);
  imPart.im=sin(c.im);
  return(pow(EULER, c.re) * imPart);
}