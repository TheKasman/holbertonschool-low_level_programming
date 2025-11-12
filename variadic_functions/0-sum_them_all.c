#include "header.h"

/**
 * sum_them_all - sums everything in the function together
 * @n: the total of arguments
 * @...: the other numbers to add together
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
