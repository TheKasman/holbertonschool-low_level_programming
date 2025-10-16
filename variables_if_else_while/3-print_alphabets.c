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
		putchar(toupper(lowercase[i]));
	}
	putchar('\n');
	return (0);
}
