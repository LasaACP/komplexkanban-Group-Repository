#include <math.h>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

double norm(const complex c){
  return pow(c.im, 2.0)+pow(c.re, 2.0);
}