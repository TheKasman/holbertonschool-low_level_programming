#include <stdio.h>
#include "main.h"

void print_square(int);

/**
 * print_square - prints a square using #
 * * @n : the value based off an int
 * Return: void
 */

void print_square(int n)
{
	int i, j; /*x and y*/

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++) /*horizontal*/
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
