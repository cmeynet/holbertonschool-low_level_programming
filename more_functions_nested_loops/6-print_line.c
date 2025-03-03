#include <stdio.h>
#include "main.h"
/**
 * print_line - Function that draw a straight line
 * @n : number of time to print character
 *
 * Return: line of '_'
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
