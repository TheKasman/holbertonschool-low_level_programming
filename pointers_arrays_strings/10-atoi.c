#include "main.h"
#include <stdio.h>

/**
 * _atoi - takes a string and converts to an int.
 * @s: the string
 * Return: returns the int
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int started = 0;


	while (*s != '\0')
	{
		if (*s == '-' && started == 0)
		{
			sign = -sign;
		}

		if ((*s >= '0') && (*s <= '9'))/*if 0-9*/
		{
			num = num * 10 + (*s - '0');
			started = 1;
		}
		else if (started == 1)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
