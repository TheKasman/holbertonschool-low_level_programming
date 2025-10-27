#include <stdio.h>

/**
 * print_diagsums - sums up the values in a 2d array diagonally
 * @a:the pointer to the 2d array
 * @size:the other dimension of the 2d array (BAD IDEA TO FLATTEN A 2D ARRAY)
 * Return: V O I D
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
