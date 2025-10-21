#include <stdio.h>
#include "main.h"

void print_line(int);

/**
 * print_line - prints a line based off the value of n "_"
 * @n : the value based off an int
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
