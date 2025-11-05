#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concanteants two strings... IN MALLOC FORM
 * @s1: string one
 * @s2: string two
 * @n: n bytes of s2
 * Return: returns the string back to you. all merged up
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*move to the end of string 1*/
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}

	if (n > j)
	{
		n = j;
	}

	concat = malloc(i + n + 1);
	if (concat == NULL)
		return (NULL);
	/*assign */
	k = 0;
	for (j = 0; j < i; j++)
	{
		concat[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		concat[j + k] = s2[k];
	}
	concat[j + k] = '\0';
	return (concat);
}
