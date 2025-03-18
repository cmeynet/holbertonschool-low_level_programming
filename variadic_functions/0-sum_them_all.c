#include "variadic_functions.h"
/**
 * sum_them_all - Function that returns the sum
 * of all its parameters
 * @n: number of parameters
 *
 * Return: the sum of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	/* Declare a list of arguments */
	va_list args;

	if (n == 0)
		return (0);

	/* Initialize the list from n */
	va_start(args, n);

	for (i = 0; i < n; i++)
		/* Gets the next argument value and adds it to sum */
		sum += va_arg(args, int);

	/* Ends the use of va_list */
	va_end(args);

	return (sum);
}
