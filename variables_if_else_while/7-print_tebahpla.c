#include <stdio.h>
#include <string.h>

/**
 * main - main loop
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char reverse[] = "abcdefghiijklmnopqrstuvwxyz";
	int i;
	int alphabet = strlen(reverse);

	for (i = alphabet - 1 ; i >= 0; i--)
	{
		putchar(reverse[i]);
	}
	putchar('\n');
	return (0);
}
