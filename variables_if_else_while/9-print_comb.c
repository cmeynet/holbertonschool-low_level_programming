#include <stdio.h>
/**
 * main - Loop prints all possible combinations of single-digit numbers
 *
 * Return: the digit numbers of base 10 with commas and space between
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
