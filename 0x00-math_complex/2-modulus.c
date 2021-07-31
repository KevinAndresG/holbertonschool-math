#include "holberton.h"

/**
 * modulus - Write a function that returns the modulus of a complex.
 * @c: struc complex type
 * Return: return a double
 */

double modulus(complex c)
{
	double x, y, num, mod;
	num = 2;

	x = pow(c.re, num);
	y = pow(c.im, num);

	mod = sqrt(x + y);

	return (mod);
}
