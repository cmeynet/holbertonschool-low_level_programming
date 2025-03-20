#include "3-calc.h"
/**
 * main - Function that searche for an integer
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if it's correct
 */
int main(int argc, char *argv[])
{
	int result;
	/* Declare a function pointer for the function associated */
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Assign to get_op_func to find the operator */
	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/**
	 * * Store the result of the operation
	 * * Use atoi() to convert arguments to ing
	 */
	result = fptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
