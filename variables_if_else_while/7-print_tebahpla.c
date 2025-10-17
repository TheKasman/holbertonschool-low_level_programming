#include <stdio.h>

/**
 * main - main loop
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char cha;

	for (cha = 'z'; cha >= 'a'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
