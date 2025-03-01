#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: pointer to an array 
 * @n: the number of elements of an array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;


	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

