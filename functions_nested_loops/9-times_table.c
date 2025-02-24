#include <stdio.h>
#include "main.h"
/**
 * times_table - Function that prints the 9 times table
 *
 * Return: the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar('0' + k);
				}
				else
				{
					_putchar('0' + j);
				}
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
			_putchar('\n');
	}
}
