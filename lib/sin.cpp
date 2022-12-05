#include <cmath>
#include "../include/complex.h"

complex sin(const complex c)
{
    double a = std::sin(c.re) * std::cosh(c.im);
    double b = std::cos(c.re) * std::sinh(c.im);
    return complex(a,b);
}