#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid previously created
 *
 * @grid: Pointer to the 2D grid to be freed
 *
 * @height: Height of the 2D grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
