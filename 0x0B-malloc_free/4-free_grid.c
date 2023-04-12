#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D grid from alloc_grid
 * @grid: refers to alloc_grid
 * @height:
 * Return: void
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
