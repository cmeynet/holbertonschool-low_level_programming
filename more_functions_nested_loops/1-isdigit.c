#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Function to return 1 if is a digit and 0 otherwise
 * @c : the number to be checked
 * Return: 1 for a digit or 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
