#include "main.h"
/**
 * _memcpy - Function that copy memory area
 * @dest: pointer to destination memory area
 * where the data will be copied.
 * @src: pointer to the source memory area
 * where the data will be copied.
 * @n: the number of bytes to copy
 * from src to dest.
 *
 * Return: string modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
