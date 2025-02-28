#include "main.h"
/**
 * puts2 - Function that print every other character of a string
 * @str : pointer to a character
 *
 * Return: print every other character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
