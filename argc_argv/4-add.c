#include <stdlib.h>
#include "main.h"
/**
 * main - Program that add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it's correct
 */
int main(int argc, char *argv[])
{
	int i, add = 0;
	char *j;

	for (i = 1; i < argc; i++)
	{
		/* Initialize j to point at the first character of a string */
		for (j = argv[i]; *j != '\0'; j++)
		{
			if (*j < '0' || *j > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
