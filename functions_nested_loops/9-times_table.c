#include <stdio.h>
#include "main.h"

void times_table(void);

/**
 * times_table - recites the times table for numbers 0-9
 * Return: void
 */

void times_table(void)
{
	int num1 = 0;
	int num2 = 0;
	int i, j, value;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = (num1 + i) * (num2 + j);

			if (value >= 10)
			{
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);

				if (j == 9)
				continue;

				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + value);

				if (j == 9)
				continue;

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
