#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Function to return 1 if is a letter
 * @c : the letter to be checked
 * Return: 1 foe letter or 0 for otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
