#include <cmath>
#include "../include/complex.h"

complex tan(const complex c)
{
    return sin(c)/cos(c);
}