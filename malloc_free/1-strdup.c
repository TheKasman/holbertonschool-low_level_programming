#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer of a duplicated string
 * @str: the string
 * Returns: Null if it's null, returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *copy;

	/*check for null*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*memory allocation for copy*/
	copy = (char *)malloc(strlen(str) + 1);

	/*no garbage text*/
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0'; /*let's not forget this at the end*/

	return (copy);
}
