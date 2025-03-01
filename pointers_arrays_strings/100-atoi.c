#include "main.h"
#include <limits.h> /* To include INT_MAX and INT_MIN */
/**
 * _atoi - Function that convert a string to an integer
 * @s : pointer of a string
 *
 * Return: the integer of a string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Ignore the white space before the string and the non-numeric characters*/
	while (*s == ' ' || *s < '0' || *s > '9')
	{
		s++;
	}

	if (*s == '-') /* Indicate the sign */
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
		int number = *s - '0'; /* Converting characters to numbers */

		/* To verify if there is a risk of overflow before adding the number */
		if (result > (INT_MAX - number) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + number;
		s++;
	}

	return (result * sign);
}
