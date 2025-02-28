#include "main.h"
/**
 * print_array - Function that print n elements of an array of integers
 * @a : pointer to a character
 * @n: element of an array of integers
 *
 * Return: n elements of an array in order as they are stored
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1) /* if i is not the last element of an array */
		{
			printf("%d, ", *a);
		}
		else
		{
			printf("%d", *a);
		}
		a++;
	}
	printf("\n");
}
