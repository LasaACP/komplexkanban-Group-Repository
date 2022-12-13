#include <cmath>
#include "../include/complex.h"
#define PI 3.141592653589

complex acos(complex com)
{
    complex i = complex(0,1);
    return 0.5*PI + i * log(i*com  + sqrt(1-pow(com,2)));
}