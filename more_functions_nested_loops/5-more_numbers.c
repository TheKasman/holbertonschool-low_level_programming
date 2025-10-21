#include <stdio.h>
#include "main.h"

void more_numbers(void);

/**
 * more_numbers - prints the numbers from 0-9
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
			}
				_putchar('0' + i % 10);
		}

		_putchar('\n');
	}
}
