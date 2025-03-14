#include "main.h"
/**
 * _strchr - Function that locate a character
 * in a string.
 * @s: pointer to a string in which to
 * search for the character
 * @c: character to find in the string
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
