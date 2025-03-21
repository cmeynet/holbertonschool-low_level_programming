#include "function_pointers.h"
/**
 * print_opcode - program that prints
 * the opcodes of its own main function
 * @func: function pointed
 * @num_bytes: number of bytes of main
 *
 * Return: nothing
 */

typedef void (*function_ptr)();

void print_opcode(function_ptr func, int num_bytes)
{
	/* Explicit cast to avoid error */
	unsigned char *ptr = (unsigned char *)func;
	int i;


	for (i = 0; i < (num_bytes - 1); i++)
	{
		/* Display in hexadecimal */
		printf("%02hhx ", ptr[i]);
	}
	printf("%02hhx\n", ptr[i]);
}

/**
 * main - Function that prints the opcodes of its own
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it's correct
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	if (atoi(argv[1]) > 0)
	{
		print_opcode((function_ptr)main, atoi(argv[1]));
	}
	return (0);
}
