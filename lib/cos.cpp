#include <cmath>
#include "../include/complex.h"

complex cos(const complex c)
{
    double a = std::cos(c.re) * std::cosh(c.im);
    double b = -1 * std::sin(c.re) * std::sinh(c.im);
    return complex(a,b);
}