#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);

/**
 * print_array - prints the array
 * @a: the array in questino
 * @n: how many entries to be printed
 * Return: THE VOID
 */

void print_array(int *a, int n)
{
	/*step 1: assign array to pointer*/
	int i;


	/*step 3: P R I N T*/
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
