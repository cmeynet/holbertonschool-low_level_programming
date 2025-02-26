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
	int i, end = strlen(s);

	for (i = end - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
