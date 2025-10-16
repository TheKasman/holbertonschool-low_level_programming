#include <stdio.h>

/**
 * main - time for another alphabet loop!
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		char c = alphabet[i];

		if (c == 'q' || c == 'e')
		{
			i++;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
