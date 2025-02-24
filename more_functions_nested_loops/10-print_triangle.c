#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Function that print a triangle of #
 * @size : size of the triangle
 *
 * Return: triangle of #
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i <= j)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else 
	{
		_putchar('\n');
	}
}


