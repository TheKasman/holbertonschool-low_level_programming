#include "main.h"
#include <stdio.h>

void rev_string(char *s);

/**
 * rev_string - reverses the string! BUT IT'S A CHAR ARRAY
 * @s: the string.
 * Return: VOID
 */

void rev_string(char *s)
{
	char *end = s;
	char *begin = s;

	/*bring end to the .... end*/
	while (*end != '\0')
	{
		end++;
	}
	end--; /*put its index back one*/

	while (begin < end)
	{
		char temp = *begin;
		*begin = *end;
		*end = temp;
		/*a gets put into c, a becomes b, b becomes c*/

		begin++;
		end--;
	}
}
