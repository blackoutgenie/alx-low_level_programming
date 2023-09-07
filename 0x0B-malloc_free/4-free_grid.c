#include "main.h"

/**
 * free_grid - functio that frees grid of integers created by alloc_grid
 * @grid: two dimensional grid
 * @height: height of the grid
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
