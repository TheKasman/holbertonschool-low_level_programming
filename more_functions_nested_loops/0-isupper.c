#include "main.h"
#include <stdio.h>

int _isupper(int);

/**
 * _isupper - checks for uppercase letters
 * @c: int variable for letter
 * Return: 1 if it's uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
