#include "main.h"
/**
 * print_chessboard - Function that
 * prints the chessboard
 * @a: string to print
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{

		for (j = 0 ; j < 8; j++)
		{
			/* Print a pointer to a row i and column j */
			_putchar(a[i][j]);
		}
		 _putchar('\n');
	}
}
