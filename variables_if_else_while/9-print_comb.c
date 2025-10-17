#include <stdio.h>

/**
 * main - main loop for this stuff
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num < 9)
		{
			putchar(num + '0');
			putchar(',');
		}
		else
			putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
