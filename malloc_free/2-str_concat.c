#include "main.h"
/**
 * str_concat - Function that concatenate two strings
 * and allocate space in memory
 * @s1: string 1
 * @s2: string 2 to be added
 *
 * Return: a concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int i;
	char *tmp_concat;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	tmp_concat = malloc(sizeof(char) * (len1 + len2));

	if (tmp_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		tmp_concat[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		tmp_concat[len1 + i] = s2[i];
	}

	tmp_concat[len1 + len2] = '\0';

	return (tmp_concat);
}
