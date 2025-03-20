#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Library for handling variadic functions */
#include <stdarg.h>

/**
 * struct print - Struct to print
 * based on argument type
 *
 * @type: type of argument
 * @f: the function associated
 */
typedef struct print
{
	char *type;
	void (*f)(va_list);
} print_f;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
