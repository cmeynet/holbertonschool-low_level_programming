#include "main.h"
/**
 * alloc_grid - Function that return a pointer to a 2
 * dimensional array if integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptr_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for a pointer of an array of integers */
	ptr_grid = malloc(sizeof(int *) * height);
	if (ptr_grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each line */
	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc(sizeof(int) * width);

		/* If allocation fails, free and return NULL */
		if (ptr_grid[i] == NULL)
		{
			/* Free already allocated lines */
			for (k = 0; k < i; k++)
			{
				free(ptr_grid[k]);
			}
			/* Free the main board */
			free(ptr_grid);
			return (NULL);
		}
		/* Initializing values to 0 */
		for (j = 0; j < width; j++)
		{
			ptr_grid[i][j] = 0;
		}
	}
	return (ptr_grid);
}
