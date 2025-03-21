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

void print_opcode(function_ptr func, const int num_bytes)
{
	/* Explicit cast to avoid error */
	unsigned char *ptr = (unsigned char *)func;
	int i;


	for (i = 0; i < num_bytes; i++)
	{
		/* Display in hexadecimal */
		printf("%02x ", ptr[i]);
	}
	printf("\n");
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

	print_opcode((function_ptr)main, atoi(argv[1]));
	return (0);
}
