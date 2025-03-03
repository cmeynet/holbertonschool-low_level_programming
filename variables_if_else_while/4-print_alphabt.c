#include <stdio.h>
/**
 * main - Loop for print the alphabet in lowercase except letters q and e
 *
 * Return: the alphabet in lowercase without q and e
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
