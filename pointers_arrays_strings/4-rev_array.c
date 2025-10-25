#include "main.h"
#include <stdio.h>


/**
 * reverse_array - reverses the string! BUT IT'S A CHAR ARRAY
 * @a: the array.
 * @n: how many entries in the array
 * Return: VOID
 */

void reverse_array(int *a, int n)
{
	int *end = a + n - 1;
	int *begin = a;

	while (begin < end)
	{
		int temp = *begin;
		*begin = *end;
		*end = temp;
		/*a gets put into c, a becomes b, b becomes c*/

		begin++;
		end--;
	}
}
