#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Prints an array using the minimum and maximum values
 * @min: the minimum
 * @max: the maximum
 * Return: Returns the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	/*time to loop for lengths*/
	size = max - min + 1;


	/*MALLOC TIME*/
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	/*print to the array!*/
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
