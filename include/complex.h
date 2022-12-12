/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : complex
Author : Jai Nagaraj
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : 11/28/2022
Modified : 11/28/2022
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H 
#define COMPLASA_H

#include <iostream>

using namespace std;

class complex {
	private:
		double re;
		double im;
	public:

		//----------------------------------------- CONSTRUCTORS -----------------------------------------------------
		complex();
		complex(double real, double imaginary);

    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------
	/**
     * Returns the sum of two complex numbers
     * @param c the complex addend
     * @return the sum of the complex number and c
     * @author Sameer Agrawal
     */
    complex operator+(complex c);

    /**
     * Returns the sum of a complex number and an integer
     * @param r the real addend
     * @param c the complex addend
     * @return the sum of the real and complex numbers
     * @author Sameer Agrawal
     */
    friend complex operator+(double r, complex c);

    /**
     * Returns the sum of a complex number and an integer
     * @param r the real addend
     * @return the sum of the complex and real numbers
     * @author Sameer Agrawal
     */
    complex operator+(double r);

    /**
     * Returns the difference of two complex numbers
     * @param c the complex subtrahend
     * @return the difference of the complex number and c
     * @author Sameer Agrawal
     */
    complex operator-(complex c);

    /**
     * Returns the difference of an integer and a complex number
     * @param r the real minuend
     * @param c the complex subtrahend
     * @return the difference of the real and complex numbers
     * @author Sameer Agrawal
     */
    friend complex operator-(double r, complex c);

    /**
     * Returns the difference of a complex number and an integer
     * @param r the real minuend
     * @return the difference of the complex and real numbers
     * @author Sameer Agrawal
     */
    complex operator-(double r);

    /**
     * Returns the negative of the complex number
     * @return the negative of the complex number
     * @author Sameer Agrawal
     */
    complex operator-();

    /**
     * Returns the product of two complex numbers
     * @param c the second complex factor
     * @return the product of the complex number and c
     * @author Sameer Agrawal
     */
    complex operator*(complex c);

    /**
     * Returns the product of an integer and a complex number
     * @param r the real factor
     * @param c the complex factor
     * @return the product of the real and complex numbers
     * @author Sameer Agrawal
     */
    friend complex operator*(double r, complex c);

    /**
     * Returns the product of a complex number and an integer
     * @param r the real factor
     * @return the product of the complex and real numbers
     * @author Sameer Agrawal
     */
    complex operator*(double r);

    /**
     * Returns the quotient of two complex numbers
     * @param c the complex divisor
     * @return the quotient of the complex number and c
     * @author Sameer Agrawal
     */
    complex operator/(complex c);

    /**
     * Returns the quotient of an integer and a complex number
     * @param r the real dividend
     * @param c the complex divisor
     * @return the quotient of the real and complex numbers
     * @author Sameer Agrawal
     */
    friend complex operator/(double r, complex c);

    /**
     * Returns the quotient of a complex number and an integer
     * @param r the real divisor
     * @return the quotient of the complex and real numbers
     * @author Sameer Agrawal
     */
    complex operator/(double r);

    /**
     * Assigns a complex number
     * @param c the complex number to assign
     * @author Max Vale
     */
    void operator=(complex c);

    /**
     * Adds a complex number and assigns the result
     * @param c the complex addend
     * @author Max Vale
     */
    void operator+=(complex c);

    /**
     * Subtracts a complex number and assigns the result
     * @param c the complex subtrahend
     * @author Max Vale
     */
    void operator-=(complex c);

    /**
     * Multiplies a complex number and assigns the result
     * @param c the complex factor
     * @author Max Vale
     */
    void operator*=(complex c);
    
    /**
     * Divides a complex number and assigns the result
     * @param c the complex divisor
     * @author Max Vale
     */
    void operator/=(complex c);

    /**
     * Checks for equality between two complex numbers
     * @param c the complex number to compare
     * @return the equality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    bool operator==(complex c);

    /**
     * Checks for equality between a complex number and a real number
     * @param r the real number to compare
     * @return the equality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    bool operator==(double r);

    /**
     * Checks for equality between a real number and a complex number
     * @param r the real number to compare
     * @param c the complex number to compare
     * @return the equality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    friend bool operator==(double r, complex c);

    /**
     * Checks for inequality between two complex numbers
     * @param c the complex number to compare
     * @return the inequality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    bool operator!=(complex c);

    /**
     * Checks for inequality between a complex number and a real number
     * @param r the real number to compare
     * @return the inequality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    bool operator!=(double r);

    /**
     * Checks for inequality between a real number and a complex number
     * @param r the real number to compare
     * @param c the complex number to compare
     * @return the inequality of the numbers as a boolean
     * @author Sameer Agrawal
     */
    friend bool operator!=(double r, complex c);

    /**
     * Extracts data from an input stream, where the data is of the form "(double real, double imag)" and stores result in a complex number.
     * @param in the input stream to use for extraction
     * @param c the complex number for data to be extracted to
     * @return the input stream used
     * @author Lance Moczygemba
     */
    friend istream& operator>> (istream& istr, complex& input);

    /**
     * Extracts data from a complex number in the form "(double real, double imag)" and stores result in an output stream
     * @param out the output stream for data to be extracted to
     * @param c the complex number to use for extraction
     * @return the output stream used
     * @author Lance Moczygemba
     */
    
    friend ostream& operator<< (ostream& ostr, const complex& output);



  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Sameer Agrawal
     */
    friend double abs(const complex);
	/**
     * Returns the real part of comlpex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author Sameer Agrawal
     */
    double real(const complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the real part of
     * @return complex.imaginary
     * @author Sameer Agrawal
     */
    double imag(const complex);
	/**
     * Returns the angle of a complex number.
     * @param com The complex number to find the angle of
     * @return The complex number's angle
     * @author Jai Nagaraj
     */
    friend double arg(const complex);

	/**
     * Returns the complex conjugate of its argument.
     * @param com The complex number to find the conjugate of
     * @return The complex number's conjugate
     * @author Sameer Agrawal
     */
    complex conj(const complex);
    
	/**
     * Returns the square of the magnitude of its argument.
		Faster than abs, but more likely to cause an overflow. For
		comparing magnitudes.
     * @param com The complex number to find the squared magnitude of
     * @return The complex number's squared magnitude
     * @author Max Vale
     */
    friend double norm(const complex);

	/**
     * 	Takes a pair of polar coordinates that represent the
		magnitude and angle of a complex number and returns the
		corresponding complex number.
     *  @param mag The magnitude of the complex number
	 *  @param ang The angle of the complex number
     *  @return The complex number with the specified magnitude and angle
     *  @author Jai Nagaraj
     */
    friend complex polar(double mag, double ang);


		//------------------------------------- MATH AND TRIGONOMETRIC LIBRARY FUNCTIONS -------------------------------------------

	/**
     * Returns the angle whose cosine is its argument.
     * @param com the complex number to be used in arccosine
     * @return the arccossine of the complex number
     * @author Jai Nagaraj
     */
    friend complex acos(const complex);

	/**
     * Returns the angle whose sine is its argument.
     * @param com the complex number to be used in arcsine
     * @return the arcsine of the complex number
     * @author Jai Nagaraj
     */
    friend complex asin(const complex);

	/**
     * Returns the angle whose tangent is its argument.
     * @param com the complex number to be used in arctangent
     * @return the arctangent of the complex number
     * @author Jai Nagaraj
     */
    friend complex atan(const complex);

	/**
     * Returns the cosine of the argument.
     * @param com the complex number to be used in cosine
     * @return the cosine of the complex number
     * @author Jai Nagaraj
     */
    friend complex cos(const complex);

	/**
     * Returns the hyperbolic cosine of the argument.
     * @param com the complex number to be used in hyperbolic cosine
     * @return the hyperbolic cosine of the complex number
     * @author Jai Nagaraj
     */
    friend complex cosh(const complex);

	/**
     * Computes e**x, where e is the base of the natural
	   logarithms, and x is the argument given to exp.
     * @param com the complex number to be used as x
     * @return e to the power of the complex number
     * @author Max Vale
     */
    friend complex exp(const complex);

	/**
     * Returns the natural logarithm of its argument.
     * @param com the complex number to be used in log
     * @return the natural logarithm of the complex number
     * @author Max Vale
     */
    friend complex log(const complex);

	/**
     * Returns the common logarithm of its argument.
     * @param com the complex number to be used in log base 10
     * @return the common logarithm of the complex number
     * @author Max Vale
     */
    friend complex log10(const complex);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author Sameer Agrawal
     */
    friend complex pow(double b, const complex exp);

    /**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the complex base of the exponential function
	 * @param exp the integer exponent that b is raised to
     * @return the EXPth power of b
     * @author Sameer Agrawal
     */
    friend complex pow(const complex b, int exp)

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author Sameer Agrawal
     */
    friend complex pow(const complex b, double exp);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author Sameer Agrawal
     */
    friend complex pow(const complex b, const complex exp);

	/**
     * Returns the sine of the argument.
     * @param com the complex number to be used in sine
     * @return the sine of the complex number
     * @author Jai Nagaraj
     */
    friend complex sin(const complex);

	/**
     * Returns the hyperbolic sine of the argument.
     * @param com the complex number to be used in hyperbolic sine
     * @return the hyperbolic sine of the complex number
     * @author Jai Nagaraj
     */
    friend complex sinh(const complex);

	/**
     * Returns the square root of its argument.
     * @param com the complex number to find the square root of
     * @return the square root of com
     * @author Max Vale
     */
    friend complex sqrt(const complex);

	/**
     * Returns the tangent of the argument.
     * @param com the complex number to be used in tangent
     * @return the tangent of the complex number
     * @author Jai Nagaraj
     */
    friend complex tan(const complex);

	/**
     * Returns the hyperbolic tangent of the argument.
     * @param com the complex number to be used in hyperbolic tangent
     * @return the hyperbolic tangent of the complex number
     * @author Jai Nagaraj
     */
    friend complex tanh(const complex);

}; // complex class declaration
#endif
