#include <stdio.h>
#include "main.h"

/**
 * main - coreloop
 *
 * Return: always 0 (Success)
 */



int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
