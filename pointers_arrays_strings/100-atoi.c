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

	/* If they are mutliple signs */
	while (*s < '0' || *s > '9')
	{
		if (*s == '-')
			sign = -sign; /*  Invert the sign for each '-' */
		s++;
	}

	while (*s >= '0' && *s <= '9')
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

	return (sign * result);
}
