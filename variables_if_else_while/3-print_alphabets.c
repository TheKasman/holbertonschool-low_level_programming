#include <stdio.h>
#include <ctype.h>
/**
 * main - main loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvqxyz";
	int i;
	/* lowercase loop */
	for (i = 0; lowercase[i] != '\0'; i++)
	{
		putchar(lowercase[i]);
	}
	/* convert to uppercase then splat to screen */
	for (i = 0; lowercase[i] != '\0'; i++)
	{
		char c = lowercase[i];

		if (c >= 'a' && c <= 'z')
		{
			c = c - 32; /* ascii conversion */
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
