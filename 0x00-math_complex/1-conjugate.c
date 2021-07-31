#include "holberton.h"

/**
 * conjugate - Write a function that returns the conjugate
 * @c: complex int variable
 * Return: a struct complex
 */
complex conjugate(complex c)
{
	complex conj;

	conj.re = c.re;
	conj.im = c.im * (-1);

	return (conj);
}