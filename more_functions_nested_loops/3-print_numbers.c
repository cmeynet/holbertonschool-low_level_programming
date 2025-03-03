#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Function that print the numbre from 0 to 9
 *
 * Return: the list of number follow by a new line
 */
void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
