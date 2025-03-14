#include "main.h"
/**
 * _strcmp - Function that compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if the two strings are similar
 * the difference between their ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2) /* If the characters are different, return the difference */
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
