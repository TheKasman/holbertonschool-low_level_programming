#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a pyramid based off an int value
 * @n: n makes the size of the pyramid
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{

			for (k = 0; k < n - i - 1; k++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
