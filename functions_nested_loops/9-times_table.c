#include <stdio.h>
#include "main.h"

void times_table(void);

/**
 * times_table - recites the times table for numbers 0-9
 * Return: void
 */

void times_table(void)
{
	int i, j, value;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = i * j;

			if (j == 0)
			{
				_putchar('0' + value);
			}
			else if (value >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + value);
			}
		}
		_putchar('\n');
	}
}
