#include <stdio.h>
#include "main.h"

int _islower(int c);

/**
 * *string_toupper - Changes lowercase to uppercase
 *@s: the character to check
 * Return: returns the string
 */


char *string_toupper(char *s)
{
	char *string = s;

	while (*string)
	{
		if (*string >= 'a' && *string <= 'z')
		{
			*string = *string - 32;
		}
		string++;
	}
	return (s);
}
