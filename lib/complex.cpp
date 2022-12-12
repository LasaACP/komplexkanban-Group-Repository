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

bool complex::operator==(complex c) {
  return ((re == c.re) && (im == c.im));
} 

bool complex::operator==(double c) {
  complex* e = new complex(c);
  return ((re == e->re) && (im == e->im));
} 

bool operator==(double c, complex d) {
  complex* e = new complex(c);
  return ((d.re == e->re) && (d.im == e->im));
}

bool complex::operator!=(complex c) {
  return !((*this == c));
} 

bool complex::operator!=(double c) {
  return !(*this == c);
} 

bool operator!=(double c, complex d) {
  return !(c == d);
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
  output.re = re*c.re - im*c.im;
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

ostream& operator<< (ostream& ostr, complex output){
   ostr << "(";
   ostr << output.re;
   ostr << ", ";
   ostr << output.im;
   ostr << ")";
   return ostr;
}

istream& operator>> (istream& istr, complex input) {
  string test = "";
  istr >> test;
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
    input = out;
    return istr;
  }
  else {
    string real = "";
    for (int z = 0; z < test.length(); z++) {
      if (isdigit(test[z]) || test[z] == '.') {
        real += test[z];
      }
    }
    if (real != "") {
      double real_doub = stod(real);
      complex out (real_doub, 0);
      input = out;
      return istr;
    }
    else {
      complex out (0, 0);
      input = out;
      return istr;
    }
  }

}


// - - - - - Other Functions Follow - - - - - - - - - - - -
