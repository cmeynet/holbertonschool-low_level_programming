#include <stdio.h>
#include "main.h"
/**
 * _islower - Function to return 1 if is lowercase
 * @c : the letter to be checked
 * Return: 1 fir lowercase or 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
