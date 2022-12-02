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
//#include <complex>

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
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author ____________
     */
    friend double abs(const complex);
    void operator=(complex c);
    complex* operator+(complex c);
    complex* operator-(complex c);
    complex* operator*(complex c);
    complex* operator/(complex c);
  
  
    
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author ____________
     */
    friend double abs(const complex);
	/**
     * Returns the real part of comlpex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author ___________
     */
    double real(const complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the real part of
     * @return complex.imaginary
     * @author _________
     */
    double imag(const complex);
	/**
     * Returns the angle of a complex number.
     * @param com The complex number to find the angle of
     * @return The complex number's angle
     * @author _________
     */
    friend double ang(const complex);

	/**
     * Returns the complex conjugate of its argument.
     * @param com The complex number to find the conjugate of
     * @return The complex number's conjugate
     * @author _________
     */
    complex* conj(const complex);
	/**
     * Returns the square of the magnitude of its argument.
		Faster than abs, but more likely to cause an overflow. For
		comparing magnitudes.
     * @param com The complex number to find the squared magnitude of
     * @return The complex number's squared magnitude
     * @author _________
     */
    friend double norm(const complex);

	/**
     * 	Takes a pair of polar coordinates that represent the
		magnitude and angle of a complex number and returns the
		corresponding complex number.
     *  @param mag The magnitude of the complex number
	 *  @param ang The angle of the complex number
     *  @return The complex number with the specified magnitude and angle
     *  @author _________
     */
    friend complex polar(double mag, double ang);


		//------------------------------------- MATH AND TRIGONOMETRIC LIBRARY FUNCTIONS -------------------------------------------

	/**
     * Returns the angle whose cosine is its argument.
     * @param com the complex number to be used in arccosine
     * @return the arccossine of the complex number
     * @author ____________
     */
    friend complex acos(const complex);

	/**
     * Returns the angle whose sine is its argument.
     * @param com the complex number to be used in arcsine
     * @return the arcsine of the complex number
     * @author ____________
     */
    friend complex asin(const complex);

	/**
     * Returns the angle whose tangent is its argument.
     * @param com the complex number to be used in arctangent
     * @return the arctangent of the complex number
     * @author ____________
     */
    friend complex atan(const complex);

	/**
     * Returns the cosine of the argument.
     * @param com the complex number to be used in cosine
     * @return the cosine of the complex number
     * @author ____________
     */
    friend complex cos(const complex);

	/**
     * Returns the hyperbolic cosine of the argument.
     * @param com the complex number to be used in hyperbolic cosine
     * @return the hyperbolic cosine of the complex number
     * @author ____________
     */
    friend complex cosh(const complex);

	/**
     * Computes e**x, where e is the base of the natural
	   logarithms, and x is the argument given to exp.
     * @param com the complex number to be used as x
     * @return e to the power of the complex number
     * @author ____________
     */
    friend complex exp(const complex);

	/**
     * Returns the natural logarithm of its argument.
     * @param com the complex number to be used in log
     * @return the natural logarithm of the complex number
     * @author ____________
     */
    friend complex log(const complex);

	/**
     * Returns the common logarithm of its argument.
     * @param com the complex number to be used in log base 10
     * @return the common logarithm of the complex number
     * @author ____________
     */
    friend complex log10(const complex);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author ____________
     */
    friend complex pow(double b, const complex exp);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author ____________
     */
    friend complex pow(const complex b, int exp);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author ____________
     */
    friend complex pow(const complex b, double exp);

	/**
     * Takes two arguments: pow(b, exp). It raises b to the power of exp.
     * @param b the base of the exponential function
	 * @param exp the exponent that b is raised to
     * @return the EXPth power of b
     * @author ____________
     */
    friend complex pow(const complex b, const complex exp);

	/**
     * Returns the sine of the argument.
     * @param com the complex number to be used in sine
     * @return the sine of the complex number
     * @author ____________
     */
    friend complex sin(const complex);

	/**
     * Returns the hyperbolic sine of the argument.
     * @param com the complex number to be used in hyperbolic sine
     * @return the hyperbolic sine of the complex number
     * @author ____________
     */
    friend complex sinh(const complex);

	/**
     * Returns the square root of its argument.
     * @param com the complex number to find the square root of
     * @return the square root of com
     * @author ____________
     */
    friend complex sqrt(const complex);

	/**
     * Returns the tangent of the argument.
     * @param com the complex number to be used in tangent
     * @return the tangent of the complex number
     * @author ____________
     */
    friend complex tan(const complex);

	/**
     * Returns the hyperbolic tangent of the argument.
     * @param com the complex number to be used in hyperbolic tangent
     * @return the hyperbolic tangent of the complex number
     * @author ____________
     */
    friend complex tanh(const complex);

}; // complex class declaration
#endif