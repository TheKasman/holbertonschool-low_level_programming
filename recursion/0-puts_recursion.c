#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - RECURSION
 * @s: the string
 * Return: V O I D
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
