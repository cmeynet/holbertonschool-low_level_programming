#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a number
 * @n: number to checked
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	_putchar('0' + abs(n % 10));
	return (abs(n % 10));
}
