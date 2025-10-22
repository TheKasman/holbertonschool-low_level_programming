#include <stdio.h>
#include "main.h"

void reset_to_98(int *n);

/**
 * reset_to_98 - changes n to our pointer's value
 * @n: the input in question ... IT'S A POINTER
 * Return: void
 */

void reset_to_98(int *n)
{
	int p = 98;
	*n = p;
}
