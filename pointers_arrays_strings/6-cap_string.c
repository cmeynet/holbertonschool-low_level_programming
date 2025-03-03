#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string to modify
 *
 * Return: string modified
 */
char *cap_string(char *str)
{
	int i = 0;
	/* Marker to know if we are at the beginning of a word */
	int is_separator = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
		|| str[i] == '.' || str[i] == ';' || str[i] == '?' || str[i] == '!'
		|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{
			/* We expect a letter after a separator */
			is_separator = 1;
		}
		else
		{
			/* If it is the start of a word, capitalize the letter */
			if (is_separator && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
			is_separator = 0;
		}
		i++;
	}
	return (str);
}
