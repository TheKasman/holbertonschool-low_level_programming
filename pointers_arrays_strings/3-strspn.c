#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: String to be scanned
 * @accept: the search requirement
 * Return: returns the "combo" in the string
 */

unsigned int _strspn(char *s, char *accept)
{
	char *String = s;
	int i;
	int match;
	unsigned int combo = 0;

	while (*String)
	{
		match = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*String == accept[i])
			{
				match = 1;
				break;
			}
		}

		if (!match)
			break;

		combo++;
		String++;
	}
	return (combo);
}
