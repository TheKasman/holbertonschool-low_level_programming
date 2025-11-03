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
	int i, j;
	char *copy;

	/*check for null*/
	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < str[j]; j++)
	{
	}/*we'll use J in a second.*/

	/*memory allocation for copy... THERE'S J :P*/
	copy = malloc(j + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	/*no garbage text*/
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0'; /*let's not forget this at the end*/

	return (copy);
}
