#include "main.h"
/**
 * argstostr - Function that concatenate all arguments
 * of a program
 * @ac: number of arguments
 * @av: string of each argument
 *
 * Return: a concatenate string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, len = 0;
	char *j;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* To calculate the total lenght of arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = av[i]; j[len] != '\0'; j++)
			len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		ptr[i] = ac;
		printf("%s\n", av[i]);
	}

	ptr[len] = '\0';
	return (ptr);
}
