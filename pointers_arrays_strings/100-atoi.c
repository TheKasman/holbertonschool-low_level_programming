#include "main.h"
#include <stdio.h>
#include <limits.h>

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
	int digit;

	while (*s != '\0')
	{
		if (*s == '-' && started == 0)
		{
			sign = -sign;
		}

		if ((*s >= '0') && (*s <= '9'))/*if 0-9*/
		{
			digit = *s - '0';

			if (num > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			num = num * 10 + digit;
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
