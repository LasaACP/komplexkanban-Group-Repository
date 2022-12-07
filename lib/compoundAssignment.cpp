#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

void complex::operator+=(complex c){
  im=im+c.im;
  re=re+c.re;
}

void complex::operator*=(complex c){
  im=im*c.im;
  re=re*c.re;
}

void complex::operator/=(complex c){
  im=im/c.im;
  re=re/c.re;
}

void complex::operator-=(complex c){
  im=im-c.im;
  re=re-c.re;
}