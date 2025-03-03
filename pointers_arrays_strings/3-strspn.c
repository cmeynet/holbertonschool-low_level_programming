#include "main.h"
/**
 * _strspn - Function that gets the length
 * of a prefix substring.
 * @s: string in which to search for characters
 * @accept: set of valid characters
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int find = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				find = 1;
				break;
			}
		}
		if (find == 0)
			break;
		count++;
	}
	return (count);
}
