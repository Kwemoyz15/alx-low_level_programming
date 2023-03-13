#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates memory to a 2D array
 * @width: The width of the 2D array
 * @height: The height of the 2D array
 * Return: NULL on if width or height equals or less than 0
 * else return a pointer to a newly created 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
