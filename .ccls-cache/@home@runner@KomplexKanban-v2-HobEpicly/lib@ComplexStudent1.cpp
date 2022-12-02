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


complex::complex() {
  re = 0;
  im = 0;
}
  
complex::complex(double real, double imaginary = 0.0) {
  re = real;
  im = imaginary;
}

double complex::real(const complex c) {
  return c.re;
}

double complex::imag(complex c) {
  return c.im;
}

complex complex::conj(complex c) {
  complex output = complex(c.re, c.im);
  output.im = (-1)*c.im;
  return output;
}

void complex::operator=(complex c) {
  re = c.re;
  im = c.im;
}

complex complex::operator+ (complex c) {
  complex output = complex();
  output.re = re+c.re;
  output.im = im+c.im;
  return output;
}

complex complex::operator- (complex c) {
  complex output = complex();
  output.re = re - c.re;
  output.im = im;
  return output;
}

complex complex::operator* (complex c) {
  complex output = complex();
  output.re = re*c.re + im*c.im * -1;
  output.im = re*c.im + im + c.re;
  return output;
}

complex complex::operator/ (complex c) {
  complex output = complex();
  complex numerator = complex(re, im);
  complex denominator = complex(c.re, c.im);
  c = c.conj(c);
  numerator = numerator * c;
  float den = (denominator * c).re;
  output.re = numerator.re/den;
  output.im = numerator.im/den;
  return output;
}

complex complex::operator+ (double c) {
  complex* input2 = new complex(c);
  return *this + *input2;
}

complex complex::operator- (double c) {
  complex* input2 = new complex(c);
  return *this - *input2;
}

complex complex::operator* (double c) {
  complex* input2 = new complex(c);
  return *this * *input2;
}

complex complex::operator/ (double c) {
  complex* input2 = new complex(c);
  return *this / *input2;
}

complex operator+ (double c, complex d) {
  complex* input2 = new complex(c);
  return d + *input2;
}

complex operator- (double c, complex d) {
  complex* input2 = new complex(c);
  return d - *input2;
}

complex operator* (double c, complex d) {
  complex* input2 = new complex(c);
  return d * *input2;
}

complex operator/ (double c, complex d) {
  complex* input2 = new complex(c);
  return d / *input2;
}

complex complex::operator- () {
  complex* output = new complex(re, im);
  output->re = -re;
  output->im = -im;
  return *output;
}

// - - - - - Other Functions Follow - - - - - - - - - - - -