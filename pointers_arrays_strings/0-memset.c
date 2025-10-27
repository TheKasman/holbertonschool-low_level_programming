#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memset - Replicates memset
 * @s: The place we're putting this junk into
 * @b: The stuff we want in there
 * @n: the number of bytes to be set to the value
 * Return: returns the pointer (tis a char my dude)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *point = s;
	unsigned int i;

	for (i = 0; i < n; i++)/*maybe <=*/
	{
		*point = b;
		point++;
	}

	return (s);
}
