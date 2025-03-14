#include "main.h"
/**
 * _calloc - Function that allocate memory
 * for an array
 * @nmemb: number of elements to allocate
 * @size: size in bytes of each element
 *
 * Return: pointer to the allocated memory
 * or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	/* Initialize the memory at 0 */
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
