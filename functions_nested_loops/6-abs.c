#include <stdio.h>
#include "main.h"
#include "limits.h"

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
		num = a * 1;
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

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
