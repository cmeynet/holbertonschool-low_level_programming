#include <stdio.h>
#include "main.h"
/**
 * print_sign - Function to print the sign of a number
 * @n : a random number
 * Return: 1 for positiv number, 0 for 0 and -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
