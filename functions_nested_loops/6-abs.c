#include <stdio.h>
#include "main.h"

int _abs(int a);

/**
 * _abs - shows the absolute value of the input
 * @a: the integer in question
 *
 * Return: returns absolute value
 */

int _abs(int a)
{
	int num;
	if ( a > '0')
	{
		num = '0' + a;
		return (num);
	}
	else if ( a < '0')
	{
		num = a * -1;
		return (num);
	}
	else
	{
		num = '0';
		return (num);
	}
}
