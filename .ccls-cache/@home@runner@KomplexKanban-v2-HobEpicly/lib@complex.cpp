/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexStudent1.cpp
Author : Sameer Agrawal
URL : NA
Description : The implementation for Complex.h that was written by Sameer Agrawal
Created : Nov. 28th
Last Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536
#define EPSILON 0.001


complex::complex() {
  re = 0;
  im = 0;
}

complex::complex(double real, double imaginary) {
  re = real;
  im = imaginary;
}