#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory and checks if it will break
 * @b: the amount in bytes
 * Return: returns a void pointer! (the memory address)
 */


void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);

	if (check == NULL)
	{
		exit(98);
	}

	return (check);
}
