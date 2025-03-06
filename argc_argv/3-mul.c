#include <stdlib.h>
#include "main.h"
/**
 * main - Program that multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it's correct
 */
int main(int argc, char *argv[])
{
	int result_sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result_sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result_sum);

	return (0);
}
