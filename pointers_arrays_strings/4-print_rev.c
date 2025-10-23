#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string reversed and prints a new line
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	char *p;

	p = s;

	while (*p)
	{
		p++; /*get to the end of the string*/
	}

	p--; /*go back from to the end of the string \0*/

	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
