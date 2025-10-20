#include <stdio.h>
#include "main.h"

void jack_bauer(void);

/**
 * jack_bauer - beep. BEEP. beep BEEP
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l; /* representing time */

	for (l = '0'; l < '3'; l++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (l == '2' && k > '3')
				break; /*stop at 23:59*/
			for (j = '0'; j < '6'; j++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					_putchar(l);
					_putchar(k);
					_putchar(':');
					_putchar(j);
					_putchar(i);
					_putchar('\n');
				}
			}
		}
	}
}
