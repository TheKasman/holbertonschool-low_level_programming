#include <stdio.h>
#include "main.h"

int _islower(int c);

/**
 * isLower - Checks to see if the letter is in lowercase
 *@c: the character to check
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	int r;
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
