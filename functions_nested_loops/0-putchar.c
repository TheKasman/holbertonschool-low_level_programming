#include <stdio.h>

/**
 * main - coreloop
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}
