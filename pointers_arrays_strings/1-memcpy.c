#include <stdio.h>
#include "main.h"


/**
 * *_memcpy - Replicates memcpy
 * @dest: DESTINATION UNKNOWNNNN..... *insert saxaphone*
 * @src: the SAUCE
 * @n:the amount of bytes to be copied
 * Return: Returns the char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	char *sauce = src;

	for (i = 0; i < n; i++)
	{
		*destination = *sauce;
		destination++;
		sauce++;
	}
	return (dest);
}
