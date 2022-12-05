#include <cmath>
#include "../include/complex.h"

complex cos(const complex com)
{
    double a = std::cos(com.re) * std::cosh(com.im);
    double b = -1 * std::sin(com.re) * std::sinh(com.im);
    return complex(a,b);
}