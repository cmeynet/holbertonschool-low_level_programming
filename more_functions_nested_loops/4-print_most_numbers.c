#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Function that print the numbre from 0 to 9
 * except 2 and 4
 *
 * Return: the list of number follow by a new line
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar('0' + c);
	}
	_putchar('\n');
}
