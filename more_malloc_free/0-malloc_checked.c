#include "main.h"
/**
 * malloc_checked - Function that allocate memory
 * @b: size of allocated memory
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
