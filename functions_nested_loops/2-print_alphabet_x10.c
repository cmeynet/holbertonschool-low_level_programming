#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_10 - Function for print the alphabet in lowercase
 *
 * Return: the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
