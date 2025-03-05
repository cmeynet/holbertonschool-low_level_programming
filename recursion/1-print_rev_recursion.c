#include "main.h"
/**
 * _print_rev_recursion - Function that
 * print a string in reverse.
 * @s: pointer to a string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	/* the function will advance through the chain until the end */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
