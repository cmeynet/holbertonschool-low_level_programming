#include "main.h"
/**
 * array_range - Function that create an array
 * of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	if (min < 0 || max < 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
