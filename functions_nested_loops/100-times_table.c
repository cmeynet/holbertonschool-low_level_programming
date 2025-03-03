#include <stdio.h>
#include "main.h"
/**
 * times_table - Function that prints the 9 times table
 *
 * Return: the 9 times table
 */
void print_times_table(int n)
{
	int i, j, product;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
			product = n * i * j;
				_putchar('0' + product);
				_putchar(' ');
			}
		}
		_putchar('\n');
}
