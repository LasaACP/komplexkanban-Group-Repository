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
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex::Complex() 
{
  double realPart;
  double imaginaryPart;

  Complex() {
    realPart = 0;
    imaginaryPart = 0;
  }
  
  Complex(double real, double imaginary = 0.0) {
    realPart = real;
    imaginaryPart = imaginary;
  }

  friend double real(Complex c) {
    return c.realPart;
  }

  friend double imag(Complex c) {
    return c.imaginaryPart;
  }

  Complex operator+ (Complex c) {
    return c
  }
  
}

// - - - - - Other Functions Follow - - - - - - - - - - - -