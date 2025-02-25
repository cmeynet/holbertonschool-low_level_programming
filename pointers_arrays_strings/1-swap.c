#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a : pointer to a
 * @b : pointer to b
 *
 * Return: swap the values of two integers
 */
void swap_int(int *a, int *b)
{
	int var_temp = *a;

	*a = *b;
	*b = var_temp;
}
