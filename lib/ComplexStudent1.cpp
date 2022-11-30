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
  realPart = 0;
  imaginaryPart = 0;
}
  
complex::complex(double real, double imaginary = 0.0) {
  realPart = real;
  imaginaryPart = imaginary;
}

complex::complex()

friend double real(complex c) {
  return c.realPart;
}

friend double imag(complex c) {
  return c.imaginaryPart;
}

complex operator+ (complex c) {
  complex output =  new complex();
  output.realPart = realPart+c.realPart;
  output.imaginaryPart = imaginaryPart+c.imaginaryPart;
  return output;
}

complex operator- (complex c) {
  complex output = Complex();
  output.realPart = realPart - c.realPart;
  output.imaginaryPart = imaginaryPart;
  return output;
}

complex operator* (complex c) {
  complex output = complex();
  output.realPart = realPart*c.realPart + imaginaryPart*c.imaginaryPart * -1;
  output.imaginaryPart = realPart*c.imaginaryPart + imaginaryPart + c.realPart;
  return output;
}

complex operator/ (complex c){
  
}





}

// - - - - - Other Functions Follow - - - - - - - - - - - -