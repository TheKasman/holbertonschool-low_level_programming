#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * factorial - RECURSION
 * @n: the number to factor
 * Return: the factorial
 */

int factorial(int n)
{
	int answer = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	answer = n * factorial(n - 1);
	return (answer);
}
