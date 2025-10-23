#include <stdio.h>
#include "main.h"

void puts_half(char *str);

/**
 * puts_half - takes the string input and only prints the end half of it
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int index;
	int i;
	char *point;

	point = str;

	while (*point != '\0')
	{
		length++;
		point++;
	}

	if (length % 2 == 0)
	{
		index = length / 2;
	}
	else
	{
		index = (length + 1) / 2;
	}

	for (i = 0; i < index; i++)
	{
		_putchar(str[i] + index);
	}
	_putchar('\n');
}
