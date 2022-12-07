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

  Complex::Complex() {
    realPart = 0;
    imaginaryPart = 0;
  }
  
  Complex::Complex(double real, double imaginary = 0.0) {
    realPart = real;
    imaginaryPart = imaginary;
  }

  friend double Complex::real(Complex c) {
    return c.realPart;
  }

  friend double Complex::imag(Complex c) {
    return c.imaginaryPart;
  }

  friend Complex Complex::conj(Complex c) {
    Complex output = Complex();
    output.realPart = c.realPart;
    output.imaginaryPart = -1*c.imaginaryPart;
  }
  
  Complex::friend Complex operator+ (Complex c) {
    Complex output = Complex();
    output.realPart = realPart+c.realPart;
    output.imaginaryPart = imaginaryPart+c.imaginaryPart;
    return output;
  }

  Complex::friend Complex operator- (Complex c) {
    Complex output = Complex();
    output.realPart = realPart - c.realPart;
    output.imaginaryPart = imaginaryPart;
    return output;
  }

  Complex::friend Complex operator* (Complex c) {
    Complex output = Complex();
    output.realPart = realPart*c.realPart + imaginaryPart*c.imaginaryPart * -1;
    output.imaginaryPart = realPart*c.imaginaryPart + imaginaryPart + c.realPart;
    return output;
  }

  Complex::friend Complex operator/ (Complex c) {
    Complex output = Complex();
    Complex numerator = Complex(realPart, imaginaryPart);
    numerator = numerator*c.conj(c);
    Complex denominator = c*c.conj(c);
    output.realPart = numerator.realPart/denominator;
    output.imaginaryPart = numerator.imaginaryPart/denominator;
    return output;
  }
}

// - - - - - Other Functions Follow - - - - - - - - - - - -