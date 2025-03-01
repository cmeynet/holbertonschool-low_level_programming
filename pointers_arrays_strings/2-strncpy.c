#include "main.h"
/**
 * _strncpy - Function that copie a string
 * @dest : destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	/**
	 * Copy the first n characters from src to dest
	 * n-- decrement n and check if n is still positive
	 */
	while (n-- > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Is src is shorter thant n, fill dest with '\0' up to n */
	while (n-- >= 0)
	{
		*dest = '\0';
		dest++;
	}

	return (ptr);
}


