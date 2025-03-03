#include "main.h"
/**
 * _memset - Function that fills memory
 * with a constant byte
 * @s: string to modify
 * @b: value with which to fill the memory
 * @n: the number of bytes to fill
 *
 * Return: string modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
