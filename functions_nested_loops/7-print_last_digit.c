#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a number
 * @n: number to checked
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return(n % 10);
}
