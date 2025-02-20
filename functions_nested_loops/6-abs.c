#include <stdio.h>
#include "main.h"
/**
 * _abs - Function to print the sign of a number
 * @n: number to checked
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
