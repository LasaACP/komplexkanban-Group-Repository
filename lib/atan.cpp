#include <cmath>
#include "../include/complex.h"

complex atan(complex com)
{
    double a = com.real(com);
    double b = com.imag(com);
    complex i = complex(0,1);
    /*cout << "1-i*Z: " << 1-i*com << "\n";
    cout << "1+i*Z: " << 1+i*com << "\n";
    cout << "log(1-i*Z): " << log(1 - i*com) << "\n";
    cout << "log(1+i*Z): " << log(1 + i*com) << "\n";
    cout << "log(1-i*Z)-log(1+i*Z): " << log(1 - i*com) - log(1 + i*com) << "\n";*/
    //cout << "final: " << -0.5*i * (log(i-com) - log(i+com));
    return 0.5*atan2((2*a),1-a*a-b*b) + (i/4) * (log((pow(a,2)+pow(1+b, 2))/(pow(a,2)+pow(1-b, 2))));
}