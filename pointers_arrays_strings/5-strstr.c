#include "main.h"
/**
 * _strstr - Function that searches the first
 * occurence of the substring needle in
 * the string haystack.
 * @haystack: main string in which
 * we search a substring
 * @needle: a substring that we are looking
 * for in the main string
 *
 * Return: pointer to the first occurence of
 * this substring in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *tmp_haystack;
	char *tmp_needle;
	int found = 0;

	for ( ; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			tmp_haystack = haystack;
			for (tmp_needle = needle; *tmp_needle != '\0'; tmp_needle++)
			{
				/**
				 * If the first character of tmp_haystack is
				 * different of the first character of tmp_needle
				 */
				if (*tmp_haystack != *tmp_needle)
				{
					found = 0;
					break;
				}
				else
					found = 1;
				tmp_haystack++;
			}
			if (found == 1)
				return (haystack);
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
