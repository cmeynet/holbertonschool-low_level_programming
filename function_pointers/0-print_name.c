#include "function_pointers.h"
/**
 * print_name - Function taking a function pointer
 * as a parameter and print a name
 * @name: name of the person
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL && name != NULL)
	{
	/* Call the function passed as an argument */
		f(name);
	}
}
