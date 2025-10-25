#include <stdio.h>
#include "main.h"


/**
 * is_separator - checks to see if the current *string is not a letter
 * @c: the char we're comparing from *string
 * Return: 1 or 0 for true/false
 */
int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||  c == ','
			||  c == ';' ||  c == '.' || c == '!'
			|| c == '?' || c == '"' || c == '('
			|| c == ')' || c == '{' || c == '}');
}



/**
 * *cap_string - Changes lowercase to uppercase
 *@c: the string
 * Return: returns the string
 */

char *cap_string(char *c)
{
	char *st = c;

	/*checks for the first letter being lowercase*/
	if (*st >= 'a' && *st <= 'z')
	{
		*st -= 32;
	}

	while (*st)
	{
		/*capitalises letter*/
		if (is_separator(*st) && *(st + 1) >= 'a'
				&& *(st + 1) <= 'z')
		{
			*(st + 1) -= 32;
		}
		st++;
	}
	return (c);
}
