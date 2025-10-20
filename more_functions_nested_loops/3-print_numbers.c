#include <stdio.h>
#include "main.h"

void print_numbers(void);

/**
 * print_numbers - prints the numbers from 0-9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
