#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s : pointer to a string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
