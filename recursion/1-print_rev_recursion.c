#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - RECURSION
 * @s: the string
 * Return: V O I D
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
