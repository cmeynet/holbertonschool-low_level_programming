#include "main.h"
/**
 * main - Print the number of arguments
 * passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it's correct
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
