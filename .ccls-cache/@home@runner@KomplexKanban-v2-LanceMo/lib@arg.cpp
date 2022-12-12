#include <cmath>
#include "../include/complex.h"

double arg(const complex com)
{
    return std::atan(com.im/com.re);
}