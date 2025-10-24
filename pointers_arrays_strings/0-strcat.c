#include "main.h"
#include <stdio.h>

/**
 * *_strcat - merges two strings together
 * @dest: the first string
 * @src: the second one
 * Return: Returns the fused product as a char
 */

char *_strcat(char *dest, char *src)
{
	char *fused = dest;

	while (*fused != '\0')
	{
		fused++;
	}

	while (*src != '\0')
	{
		*fused = *src;
		fused++;
		src++;
	}
	*fused = '\0';

	return (dest);
}
