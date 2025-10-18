#include <stdio.h>
#include "main.h"

void print_alphabet(void);

/**
 * main - main loop
 *
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet(); /*whee*/
	return (0);
}


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
