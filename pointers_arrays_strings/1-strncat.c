#include "main.h"
#include <stdio.h>

/**
 * *_strncat - merges two strings together, n is how many characters
 * @dest: the first string
 * @src: the second one
 * @n: the amount of data to be fused to the destination
 * Return: Returns the fused product as a char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *fused = dest;
	int i = 0;

	while (*fused != '\0')
	{
		fused++;
	}

	while (i < n && *src != '\0')
	{
		*fused = *src;
		fused++;
		src++;
		i++;
	}
	*fused = '\0';

	return (dest);
}
