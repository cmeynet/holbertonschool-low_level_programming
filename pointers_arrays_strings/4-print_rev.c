#include "main.h"
#include <string.h>
/**
 * print_rev - Function that print a string in reverse
 * @s : pointer to a character
 *
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int length = 0, i;
	char *start = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s = start;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
