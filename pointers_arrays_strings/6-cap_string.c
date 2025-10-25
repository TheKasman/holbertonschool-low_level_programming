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
	char *string = c;

	/*checks for the first letter being lowercase*/
	if (*string >= 'a' && *string <= 'z')
	{
		*string = *string - 32;
	}

	while (*string)
	{
		/*capitalises letter*/
		if (is_separator(*string) && *(string + 1) >= 'a'
				&& *(string + 1) <= 'z')
		{
			*string = *string - 32;
		}
		string++;
	}
	return (c);
}
