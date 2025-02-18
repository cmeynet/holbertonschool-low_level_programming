#include <stdio.h>
/** 
 * main - Loop for print the alphabet in lowercase
 *
 * Return: the alphabet in lowercase
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return 0;
}
