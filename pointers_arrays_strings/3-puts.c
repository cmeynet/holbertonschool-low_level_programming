#include "main.h"
/**
 * _puts - Function that print a string
 * @str : pointer to a character
 *
 * Return: a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

