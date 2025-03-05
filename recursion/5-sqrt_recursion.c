#include "main.h"
/**
 * _sqrt_recursion - Function that return
 * the natural square root of a number.
 * @n: number
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 1));
}

/**
 * _sqrt - Recursive function to calculate
 * the square root of an integer
 * @n: number of which we want to find the square root.
 * @i: square root attempt
 *
 * Return: recursive fonction to search the square root
 * of number n
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	/* Else try with i + 1 */
	return (_sqrt(n, i + 1));
}
