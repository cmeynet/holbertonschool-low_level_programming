#include "main.h"
/**
 * _strcpy - Function that copie a string from src to dest
 * @dest : pointer for the destination of the copy of the string
 * @src: pointer of the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* Add the \0 to the end of dest */ 

	return (ptr);
}
