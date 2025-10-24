#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Copies a string to another
 * @dest: destination
 * @src: the stuff to copy from.
 * @n: the amount of data to be copied to the destination
 * Return: Returns the fused product as a char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *fused = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*fused = *src;
		fused++;
		src++;
		i++;
	}

	while (i < n)
	{
		*fused = '\0';
		fused++;
		i++;
	}
	return (dest);
}
