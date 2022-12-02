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
#include <ctype.h> //for using .isDigit() in istream overload

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

complex::friend ostream& operator<< (ostream& ostr, const complex& output){
   ostr << "(";
   ostr << output.re;
   ostr << ", ";
   ostr << output.im;
   ostr << ")";
   return ostr;
}

complex::friend istream& operator>> (istream& istr, const complex& input) {
  string test = istr;
  int stop = test.find(",");
  if (stop != -1) {
    // get first number (real) as str
    string first = "";
    for (int i = 0; i < stop; i++) {
      if (isdigit(test[i]) || test[i] == '.') {
        first += test[i];
      }
    }
    //get second number (imaginary) as str
    string second = "";
    for (int x = stop; x < test.length(); x++) {
      if (isdigit(test[x]) || test[x] == '.') {
        second += test[x];
      }
    }
    double real = stod(first);
    double imag = stod(second);
    complex out (real, imag);
    return out;
  }
  else {
    string real = "";
    for (int z = 0; z < test.length(); z++) {
      if (isdigit(test[z]) || test[x] == '.') {
        real += test[z];
      }
    }
    if (real != "") {
      double real_doub = stod(real);
      complex outC2 (real_doub, 0);
      return outC2;
    }
    else {
      complex outC3 (0, 0);
      return outC3;
    }
  }

}






// - - - - - Other Functions Follow - - - - - - - - - - - -