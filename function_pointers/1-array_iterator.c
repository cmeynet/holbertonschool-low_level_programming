#include "function_pointers.h"
/**
 * array_iterator - Function that execute a function
 * given as a parameter on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0 ; i < size; i++)
			action(array[i]);
	}
}
