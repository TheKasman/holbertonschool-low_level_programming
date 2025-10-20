#include "main.h"
#include <stdio.h>

int _isdigit(int);

/**
 * _isdigit - checks for numbers 0-9
 * @c: int variable for digit
 * Return: 1 if it's uppercase, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
