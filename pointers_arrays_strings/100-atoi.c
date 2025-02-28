#include "main.h"
#include <limits.h> /* To include INT_MAX and INT_MIN */
/**
 * _strcpy - Function that copie a string from src to dest
 * @dest : pointer for the destination of the copy of the string
 * @src: pointer of the string to be copied
 *
 * Return: the pointer to dest
 */
int _atoi(char *s)
{
	int sign = 1;
	int number = 0, result = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s != 0 && *s >= '0' && *s <= '9')
	{
		number = number * 10 + (*s - '0');

	        if (result > (INT_MAX - number) / 10) 
		{
            		return (sign == 1) ? INT_MAX : INT_MIN;
        	}
		s++;
	}

	return (number);
}
