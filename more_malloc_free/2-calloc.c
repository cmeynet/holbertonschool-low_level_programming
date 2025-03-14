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
	void *ptr;
	unsigned int i;
	char *ptr_ptr;

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
	ptr_ptr = ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
