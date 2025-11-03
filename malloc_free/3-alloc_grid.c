#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Allocates a grid's memory
 * @width: the width
 * @height: the height
 * Return: NULL or the 2d array, initialised
 */


int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **twod;

	/*initial check*/
	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(height * sizeof(int *));

	if (twod == NULL)
		return (NULL);

	/*malloc all these spaces*/
	for (i = 0; i < height; i++)
	{
		twod[i] = malloc(width * sizeof(int));

		if (twod[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(twod[j]);
			}
			free(twod);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			twod[i][k] = 0;
		}
	}
	return (twod);
}
