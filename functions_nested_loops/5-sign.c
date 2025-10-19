#include <stdio.h>
#include "main.h"

int print_sign(int n);

/**
 * print_sign - prints the sign (+, -) of the integer
 * @n: the integer in question
 * Return: returns s (the sign) or 0 (for zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
