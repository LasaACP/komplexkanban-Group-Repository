#include <cmath>
#include "../include/complex.h"

// arcsin(z)=1iLn(iz+1−z2−−−−−√)

complex asin(complex com)
{
    complex i = complex(0,1);
    return 1/i * log(i*com  + sqrt(1-pow(com,2)));
}