#include <cmath>
#include "../include/complex.h"

complex tanh(const complex com)
{
    return sinh(com)/cosh(com);
}