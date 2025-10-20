#include <stdio.h>
#include "main.h"

void print_to_98(int n);

/**
 * print_to_98 - prints every number incrementally up to 98
 * @n: the number it starts from
 * Returns: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98) /*go up*/
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				int abs_i = -i; /*absolute value of i*/

				_putchar('-');

				if (abs_i >= 10)
				{
					_putchar('0' + abs_i / 10);
					_putchar('0' + abs_i % 10);
				}
				else
				{
					_putchar('0' + abs_i);
				}
			}

			else if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i);
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else/*go down*/
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i / 10) % 10);
				_putchar('0' + i % 10);
			}
			else
			{

				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
