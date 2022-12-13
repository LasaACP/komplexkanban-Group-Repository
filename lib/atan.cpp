#include <cmath>
#include "../include/complex.h"

complex atan(complex com)
{
    complex i = complex(0,1);
    return -0.5*i * (log(1 - i*com) - log(1 + i*com));
}