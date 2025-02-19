#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Function for print the alphabet in lowercase
 *
 * Return: the alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
