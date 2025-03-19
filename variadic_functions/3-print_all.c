#include "variadic_functions.h"
/**
 * print_int - Function that print an integer
 * @all: argument pointer
 */
void print_int(va_list all)
{
	printf("%d", va_arg(all, int));
}

/**
 * print_float - Function that print a float
 * @all: argument pointer
 */
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}

/**
 * print_char - Function that print a char
 * @all: argument pointer
 */
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}

/**
 * print_string - Function that print a string
 * @all: argument pointer
 */
void print_string(va_list all)
{
	char *string = va_arg(all, char*);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Function that prints anything
 * @format: list of types of arguments
 * passed to the function
 */
void print_all(const char * const format, ...)
{
	/* Array of structures to associate a character with a function */
	print_f types[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},
	};
	char *separator = "";
	/* i to browse the format string and j for the types[] array*/
	int i = 0, j = 0;
	va_list all;

	va_start(all, format);
	while (format[i] != '\0' && format != NULL)
	{
		/* To browse the character in types[] */
		while (types[j].type != NULL)
		{
			if (*types[j].type == format[i])
			{
				/* Doesn't display the comma for the first element */
				printf("%s", separator);
				/* Calls the corresponding function and print the value */
				types[j].f(all);
				/* Change the separator to the following */
				separator = ", ";
			}
			j++;
		}
		/* Initialize j for the next argument */
		j = 0;
		i++;
	}
	printf("\n");
	va_end(all);
}
