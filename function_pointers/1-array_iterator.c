#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - iterates over a parsed array
 * @array: the array in questino
 * @size: the size of it
 * @action: the function we're using on it
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
