#include <cmath>
#include "../include/complex.h"

double abs(const complex c)
{
  double result = 0;
  result += sqrt(pow((c.re),2) + pow((c.im),2));
  return result;
}
