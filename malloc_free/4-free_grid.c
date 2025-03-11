#include "main.h"
/**
 * free_grid - Function that free a 2 dimensional grid
 * @grid: adresse of 2 dimensional grid
 * @height: height of the grid
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
