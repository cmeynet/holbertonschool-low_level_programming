#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * @n: number to start
 *
 * Return: a list of all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
