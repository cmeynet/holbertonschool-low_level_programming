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
	unsigned int i, j;
	va_list args;

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		/* Initialize j for the next argument */
		j = 0;
		/* To browse the character in types[] */
		while (types[j].type != NULL)
		{
			if (*types[j].type == format[i])
			{
				/* Doesn't display the comma for the first element */
				printf("%s", separator);
				/* Calls the corresponding function and print the value */
				types[j].f(args);
				/* Change the separator to the following */
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
