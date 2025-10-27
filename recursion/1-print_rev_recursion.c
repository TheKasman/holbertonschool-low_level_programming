#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - RECURSION
 * @s: the string
 * Return: V O I D
 */

void _print_rev_recursion(char *s)
{
	/*hi*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s);
	s++;
	_putchar(*s);
}
