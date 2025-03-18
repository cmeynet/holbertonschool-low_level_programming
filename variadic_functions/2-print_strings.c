#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings,
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list characters;

	va_start(characters, n);

	for (i = 0; i < n; i++)
	{
		/* Like string is a string of characters use char* **/
		string = va_arg(characters, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		/* Adds the separator between strings, except after the last one */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(characters);
	printf("\n");
}
