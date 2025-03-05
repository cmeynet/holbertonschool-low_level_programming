#include "main.h"
/**
 * factorial - Function that return
 * the factorial of a given number
 * @n: number for which we want the factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	result = n * factorial(n - 1);

	return (result);
}
