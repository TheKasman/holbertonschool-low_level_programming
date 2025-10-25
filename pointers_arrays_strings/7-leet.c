#include <stdio.h>
#include "main.h"

/**
 * *leet - Changes specific letters to become 1337 sp34k
 *@c: the string
 * Return: returns the 1337 string
 */

char *leet(char *c)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '1', '1', '5', '5'};
	int i, j;

	for (i = 0; c[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == letter[j])
			{
				c[i] = leet[j];
			}
		}
	}
	return (c);
}
