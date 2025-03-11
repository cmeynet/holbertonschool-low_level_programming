#include "main.h"
/**
 * _calloc - Function that allocate memory
 * for an array
 * @nmemb: number of elements
 * @size: size bytes for each element
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(unsigned int));

	if (ptr == 0)
	{
		return (NULL);
	}

	/* Initialize the memory at 0 */
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
