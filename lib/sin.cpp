#include <cmath>
#include "../include/complex.h"

complex sin(const complex com)
{
    double a = std::sin(com.re) * std::cosh(com.im);
    double b = std::cos(com.re) * std::sinh(com.im);
    return complex(a,b);
}