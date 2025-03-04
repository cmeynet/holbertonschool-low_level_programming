#include "main.h"
/**
 * print_diagsums - Function that prints the sum
 * of the two diagonals of a square matrix.
 * @a: pointer to a bidimensional array
 * @size: number of integers per line
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		/* Add sum1 to get final sum */
		sum1 = sum1 + a[i * size + i];

	for (j = 0; j < size; j++)
		sum2 = sum2 + a[j * size + (size - j - 1)];

	printf("%d, %d\n", sum1, sum2);
}
