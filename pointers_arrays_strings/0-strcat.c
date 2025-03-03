#include "main.h"
/**
 * _strcat - Function that concatenate two strings
 * @dest : pointer for the string to be added
 * @src: pointer of the string to be add
 *
 * Return: a concatenate string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* Add the null byte */

	return (ptr);
}
