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
	int i, k = 0, len = 0;
	char *j;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* To calculate the total lenght of arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = av[i]; *j != '\0'; j++)
			len++;
	}

	/* + ac for the '\n' and + 1 for the '\0' */
	ptr = malloc(sizeof(char) * (len + ac + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* To copy arguments in ptr */
	for (i = 0; i < ac ; i++)
	{
		for (j = av[i]; *j != '\0'; j++)
			ptr[k++] = *j;
		/* Add \n after each argument */
		ptr[k++] = '\n';
	}

	ptr[k] = '\0';
	return (ptr);
}
