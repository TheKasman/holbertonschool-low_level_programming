#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory faster than the flash.. yeah you heard me.
 * @grid: the grid we evacuate
 * @height: the height
 * Return: Exdeath's favourite... VOID
 */


void free_grid(int **grid, int height)
{
	int i;

	/*initial check*/
	if (grid == NULL)
		return;

	/*FREE THE MALLOCES.. hehehe*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
