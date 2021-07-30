#include "holberton.h"

/**
 * display_complex_number - Write a function that displays the complex numbers
 * @c: a variable complex type
 * Return: return nothing
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
	{
		return;
	}
	else if (c.im < 0)
	{
		printf("%.0f - %.0fi\n", c.re, c.im * (-1));
	}
	else if (c.re == 0)
	{
		printf("%.0fi\n", c.im);
	}
	else if (c.im == 0)
	{
		printf("%.0f\n", c.re);
	}

	else
		printf("%.0f + %.0fi\n", c.re, c.im);
}
