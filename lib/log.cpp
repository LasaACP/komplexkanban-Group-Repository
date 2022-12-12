#include <cmath>
#include "../include/complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

complex log(const complex com){
  complex output;
  output.re=log(com.re);
  output.im=arg(com)+2*PI*abs(com);
  return output;
}

	/**
     * Returns the common logarithm of its argument.
     * @param com the complex number to be used in log base 10
     * @return the common logarithm of the complex number
     * @author ____________
     */
//complex complex::log10(const complex);