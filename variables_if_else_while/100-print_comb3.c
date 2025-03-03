#include <stdio.h>
/**
 * main - Loop prints all possible combinations of single-digit numbers
 *
 * Return: the digit numbers of base 10 with commas and space between
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
