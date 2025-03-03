#include "main.h"
/**
 * rev_string - Function that print the reverse of a string
 * @s : pointer to a character
 *
 * Return: the reverse of a string
 */
void rev_string(char *s)
{
	int end = 0, i;
	char *p = s;

	while (*p != '\0')
	{
		end++;
		p++;
	}
	for (i = 0; i < end / 2; i++)
	{
		char temp = s[i];

		s[i] = s[end - i - 1];
		s[end - i - 1] = temp;
	}
}
