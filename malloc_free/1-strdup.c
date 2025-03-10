#include "main.h"
/**
 * _strdup - Function that copy a string
 * and allocate space in memory
 * @str: string to copy
 *
 * Return: nothing
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *tmp_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	/* Allocate memory for the new string */
	tmp_str = malloc(sizeof(char) * (len + 1));

	/* Check if malloc failed */
	if (tmp_str == NULL)
	{
		return (NULL);
	}

	/* Copy the string into the allocated memory */
	for (i = 0; i < len; i++)
	{
		tmp_str[i] = str[i];
	}

	tmp_str[len] = '\0';

	return (tmp_str);
}
