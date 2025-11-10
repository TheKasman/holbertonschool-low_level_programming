#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array we're searching
 * @size: number of elements
 * @cmp:functions to use
 * Return: returns the index, -1 if no match or an error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int search_index;

	/*check for errors on all variables first*/
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	/*time to search!*/
	for (search_index = 0; search_index < size; search_index++)
	{
		if (cmp(array[search_index]))
			return (search_index);
	}

	return (-1);
}
