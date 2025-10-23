#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b);

/**
 * swap_int - swaps a and b's variables
 * @a: a swaps to b
 * @b: b swaps to a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
