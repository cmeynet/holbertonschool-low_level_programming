#include "main.h"
/**
 * leet - Function that encode a string into 1337
 * @s: string to modify
 *
 * Return: string modified
 */
char *leet(char *s)
{
	int i, j;
	char number[5] = {'4', '3', '0', '7', '1'};
	char letter[5] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		/* For each letter of string, find in array letter */
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == (letter[j] - 32))
			{
				s[i] = number[j];
			}
		}
	}
	return (s);
}
