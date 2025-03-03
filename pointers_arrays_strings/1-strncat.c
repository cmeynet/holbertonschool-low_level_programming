#include "main.h"
/**
 * _strncat - Function that concatenate two strings
 * @dest : pointer for the string to be added
 * @src: pointer of the string to be add
 * @n: bytes from src
 *
 * Return: a concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0'; /* Add the null byte */

	return (ptr);
}
