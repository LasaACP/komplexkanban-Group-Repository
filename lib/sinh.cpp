#include <cmath>
#include "../include/complex.h"

complex sinh(const complex com)
{
    double a = std::sinh(com.re) * std::cos(com.im);
    double b = std::cosh(com.re) * std::sin(com.im);
    return complex(a,b);
}