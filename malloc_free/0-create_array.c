#include "main.h"
/**
 * create_array - Function that create an array of chars
 * @size: size of the string
 * @c: specific char
 *
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * (size + 1));

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
