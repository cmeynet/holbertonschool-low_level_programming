#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 * @format: list of types of arguments
 * passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *string;
	int is_first_argument = 1;
	/* Use a pointer without modify format */
	const char *ptr = format;
	va_list all;

	va_start(all, format);
	while (*ptr != '\0')
	{
		if (*ptr == 'i' || *ptr == 'f' || *ptr == 'c' || *ptr == 's')
		{
			if (is_first_argument != 1)
				printf(", ");
			is_first_argument = 0;

			switch (*ptr)
			{
				case 'i':
					printf("%d", va_arg(all, int));
					break;
				case 'f':
					printf("%f", va_arg(all, double));
					break;
				case 'c':
					printf("%c", va_arg(all, int));
					break;
				case 's':
					string = va_arg(all, char*);
					if (string == NULL)
						printf("(nil)");
					if (string != NULL)
						printf("%s", string);
					break;
			}
		}
		ptr++;
	}
	va_end(all);
	printf("\n");
}
