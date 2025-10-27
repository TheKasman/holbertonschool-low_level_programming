#include <stdio.h>


/**
 * *_strchr - Finds the first occurence of the character in a string
 * @s: the string
 * @c: the char
 * Return: either null or the character and the rest of the string
 */

char *_strchr(char *s, char c)
{
	char *string = s;

	while (*string)
	{
		if (*string == c) /*i found it!!?!??!*/
		{
			return (string);
		}
		string++;
	}
	return (NULL);
}
