#include "main.h"
/**
 * string_nconcat - Function that concatenate two strings
 * and allocate space in memory
 * @s1: string 1
 * @s2: string 2 to be added
 * @n: n bytes of s2
 *
 * Return: a concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp_concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
		n = len2;

	tmp_concat = malloc(sizeof(char) * (len1 + (len2 - (len2 - n)) + 1));

	if (tmp_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		tmp_concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		tmp_concat[i] = s2[j];
	}

	tmp_concat[i + j] = '\0';
	return (tmp_concat);
}
