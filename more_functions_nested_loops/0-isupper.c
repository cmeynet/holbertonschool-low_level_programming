#include <stdio.h>
#include "main.h"
/**
 * _isupper - Function to return 1 if is a uppercase and 0 otherwise
 * @c : the letter to be checked
 * Return: 1 for uppercase letter or 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
