#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D grid of integers and initialize to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D grid, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(alloc[i]);

			free(alloc);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	}

	return (alloc);

}
