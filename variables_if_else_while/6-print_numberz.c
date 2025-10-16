#include <stdio.h>

/**
 * main - main loop
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
