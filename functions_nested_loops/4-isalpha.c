#include <stdio.h>
#include "main.h"

int _isalpha(int c);

/**
 * _isalpha - Checks to see if the character is a letter, upper or lowercase
 *@c: the character to check
 * Return: 1 if a latter, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
