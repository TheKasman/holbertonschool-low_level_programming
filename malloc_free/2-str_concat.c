#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - Concantenates string 1 and 2 together
 * @s1: String 1
 * @s2: String 2
 * Return: Null if there's nothing, the string when you have a valid string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/*move to the end of string 1*/
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}

	concat = malloc(i + j + 1);

	if (concat == NULL)
		return (NULL);

	/*assign */

	k = 0;
	while (*s1)
	{
		concat[k] = *s1;
		s1++;
		k++;
	}

	while (*s2)
	{
		concat[k] = *s2;
		s2++;
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
