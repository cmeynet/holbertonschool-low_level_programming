#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a number
 * @n: number to checked
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n >= 0)
	{
		_putchar('0' + r);
		return (n % 10);
	}
	else
	{
		_putchar('0' - r);
		return (-n % 10);
	}
}
