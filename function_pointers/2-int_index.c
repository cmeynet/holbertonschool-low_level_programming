#include "function_pointers.h"
/**
 * int_index - Function that searche for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
