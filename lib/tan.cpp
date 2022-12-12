#include <cmath>
#include "../include/complex.h"

complex tan(const complex com)
{
    return sin(com)/cos(com);
}