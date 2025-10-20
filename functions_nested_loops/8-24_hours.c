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

	for (l = '0'; l <= '5'; l++) /*10-59 minutes*/
	{
		for (k = '0'; k <= '9'; k++)/*0-9 minutes*/
		{
			for (j = '0'; j < '6'; j++) /*10-59 seconds*/
			{
				for (i = '0'; i <= '9'; i++) /* 0-9 seconds */
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
