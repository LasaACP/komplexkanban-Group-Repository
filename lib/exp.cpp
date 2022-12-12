#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex exp(const complex com){
  //e^ix=cosx+isinx
  complex imPart;
  imPart.re=cos(com.im);
  imPart.im=sin(com.im);
  return(pow(EULER, com.re) * imPart);
}