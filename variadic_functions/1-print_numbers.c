#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers,
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	/* Declare a list of integers */
	va_list integers;

	/* Initialize the list from n */
	va_start(integers, n);
	for (i = 0; i < n; i++)
	{
		/* Gets the next argument value and print it */
		numbers = va_arg(integers, int);
		printf("%d", numbers);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	/* Ends the use of va_list */
	va_end(integers);
	printf("\n");
}
