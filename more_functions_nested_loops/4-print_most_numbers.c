#include <stdio.h>
#include "main.h"

void print_most_numbers(void);

/**
 * print_most_numbers - prints the numbers from 0-9, excluding 2,4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
