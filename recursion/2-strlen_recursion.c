#include "main.h"
/**
 * _strlen_recursion - Function that return
 * the length of a string.
 * @s: pointer to a string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0, result;

	if (*s == '\0')
	{
		return (0);
	}
	/* Store the return of the recursive function in a variable */
	result = _strlen_recursion(s + 1);
	/* Add 1 to count the first character of the string */
	len = 1 + result;

	return (len);
}
