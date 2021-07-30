#include "holberton.h"

/**
 * display_complex_number - Write a function that displays the complex numbers
 * @c: a variable complex type
 * Return: return nothing
 */

void display_complex_number(complex c)
{
	if (c.im < 0)
	{
		printf("%.0f - %.0fi\n", c.re, c.im);
	}
	else if (c.re == 0)
	{
		printf("%.0fi\n", c.im);
	}
	else if (c.im == 0)
	{
		printf("%.0f\n", c.re);
	}
	else if (c.re == 0 && c.im == 0)
	{
		return;
	}


	else
		printf("%.0f + %.0fi\n", c.re, c.im);
}
