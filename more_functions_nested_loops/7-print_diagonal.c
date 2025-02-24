#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Function that draw a diagonal line
 * @n : number of time to print character
 *
 * Return: diagonal of '\'
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
