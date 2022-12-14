#include <cmath>
#include "../include/complex.h"

complex cosh(const complex com)
{
    double a = std::cosh(com.re) * std::cos(com.im);
    double b = std::sinh(com.re) * std::sin(com.im);
    return complex(a,b);
}