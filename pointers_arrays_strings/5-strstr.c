#include <stdio.h>


/**
 * *_strstr -  basically your CTRL + F
 * @haystack: the string of stuff you're searching
 * @needle: The context of your search
 * Return: Returns the word, null if it's not there
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		for (i = 0; i < needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}

		if (!*needle)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
