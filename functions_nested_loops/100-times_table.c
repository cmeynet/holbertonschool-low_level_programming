#include <stdio.h>
#include "main.h"
/**
 * times_table - Function that prints the 9 times table
 *
 * Return: the 9 times table
 */
void print_times_table(int n)
{
	int i, j, k;
	
	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < n)
				{
				_putchar('0' + k);
				_putchar(' ');
				}

			}
		}
	}
		_putchar('\n');
}
