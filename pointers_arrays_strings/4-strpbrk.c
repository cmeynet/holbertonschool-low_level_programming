#include "main.h"
/**
 * _strpbrk - Function that searches a string
 * for any of a set of bytes.
 * @s: the first string to be searched
 * @accept: the string containing the characters
 * to search for in s
 *
 * Return: pointer to the first character in s
 * that matches one of the characters in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;
	
	/* Loop foreach character in s */
	for (; *s != '\0'; s++)
	{
		/* Initialize the pointer at the start of accept */
		for (tmp = accept; *tmp != '\0'; tmp++)
		{
			if (*s == *tmp)
				return (s);
		}
	}
	return (NULL);
}
