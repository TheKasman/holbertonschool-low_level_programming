#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}

/**
 * main - Main loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
