#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string to a new destination
 * @dest: the destination
 * @src: the source
 * Return: Returns the destination pointer
 */


char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	/*loop the source string until the null terminator*/
	while (*src != '\0')
	{
		*point = *src;

		point++;
		src++;
	}

	*point = '\0';
	return (dest);
}
