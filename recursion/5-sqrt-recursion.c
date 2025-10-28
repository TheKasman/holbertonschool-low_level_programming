#include <stdio.h>

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: returns the number
 */
int _sqrt_recursion(int n)
{

	static int i;

	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		int result = i;

		i = 0;
		return (result);
	}
	if (i * i > n)
	{
		return (-1);
	}

	i++;

	return (_sqrt_recursion(n));
}
