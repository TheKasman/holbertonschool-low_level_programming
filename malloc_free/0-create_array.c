#include <stdio.h>
#include <stdlib.h>


/**
 * *create_array - Creates an array with MALLOC
 * @size: the size of the array
 * @c: the content
 * Return: returns the array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
