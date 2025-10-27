#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: prints the 2d array
 * Return: V O I D
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			printf("%c", a[row][column]);
		}
		printf("\n");
	}
}
