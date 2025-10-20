#include <stdio.h>
#include "main.h"

int print_last_digit(int);

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer in question
 * Return: returns the last digit (num)
 */

int print_last_digit(int n)
{
	int num;
	num = n % 10;

	if (num < 0)
	{
		num = num * -1;
	}

	_putchar('0' + num);
	return (num);
}
