/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex______.cpp
Author : _______
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536


complex::complex() {
  re = 0;
  im = 0;
}
  
complex::complex(double real, double imaginary = 0.0) {
  re = real;
  im = imaginary;
}

double real(complex c) {
  return c.re;
}

double imag(complex c) {
  return c.im;
}

complex* operator+ (complex c) {
  complex* output = new complex();
  output->re = re+c.re;
  output->im = im+c.im;
  return output;
}

complex* operator- (complex c) {
  complex* output = new complex();
  output->re = re - c.re;
  output->im = im;
  return output;
}

complex operator* (complex c) {
  complex output = complex();
  output.realPart = realPart*c.realPart + imaginaryPart*c.imaginaryPart * -1;
  output.imaginaryPart = realPart*c.imaginaryPart + imaginaryPart + c.realPart;
  return output;
}

complex::friend complex operator/ (complex c) {
  complex output = complex();
  complex numerator = complex(realPart, imaginaryPart);
  numerator = numerator*c.conj(c);
  complex denominator = c*c.conj(c);
  output.realPart = numerator.realPart/denominator;
  output.imaginaryPart = numerator.imaginaryPart/denominator;
  return output;
}





}

// - - - - - Other Functions Follow - - - - - - - - - - - -