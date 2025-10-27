#include <stdio.h>

/**
 * *_strpbrk - this is basically hit detection in games.
 * @s: String to be scanned
 * @accept: the search requirement
 * Return: returns a pointer to the byte in s. (hit) or NULL (miss)
 */

char *_strpbrk(char *s, char *accept)
{
	char *String = s;
	int i;

	while (*String)
	{

		for (i = 0; accept[i]; i++)
		{
			if (*String == accept[i])
			{
				return (String);
			}
		}

		String++;
	}
	return (NULL);
}
