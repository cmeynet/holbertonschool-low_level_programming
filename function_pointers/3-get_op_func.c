#include "3-calc.h"
/**
 * get_op_func - Function that selects the correct
 * function to perform the operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* To check the operator in the structure define on the calc.h*/
	while (ops[i].op != NULL)
	{
		/**
		 * To compare the two strings where op is the field
		 * that should hold the operator string in the structure
		 */
		if (strcmp(ops[i].op, s) == 0)
			/* f is the pointer to the function in the structure */
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
