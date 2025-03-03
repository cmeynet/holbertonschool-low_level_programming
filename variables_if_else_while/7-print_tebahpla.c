#include <stdio.h>
/**
 * main - Loop for print the alphabet in lowercase in reverse
 *
 * Return: the alphabet in lowercase in reverse
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
