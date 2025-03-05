#include "main.h"
/**
 * prime_number - Recursive function to check
 * if n is divisible by i
 * @n: number to divide
 * @i: divisor
 *
 * Return: recursive fonction to check if
 * n is divisible by i
 */
int prime_number(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	/* Is the same condition as if (i > sqrt(n))*/
	if (i > n / 2)
	{
		return (1);
	}

	/* Else try with i + 1 until n is / by i*/
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - Function that return
 * 1 if the input integer is a prime number.
 * @n: number
 *
 * Return: 1 if the input integer is a prime number
 * 0 if it isn't.
 */
int is_prime_number(int n)
{
	if (n <= 1 || n == 2 || n % 2 == 0)
	{
		return (0);
	}
	/* Test the divisors from 3 */
	return (prime_number(n, 3));
}
