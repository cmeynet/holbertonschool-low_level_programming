#include "3-calc.h"
/**
 * op_add - Function that return the sum
 * @a: number a
 * @b: number b
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that return the difference
 * @a: number a
 * @b: number b
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that return the product
 * @a: number a
 * @b: number b
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that return the result
 * of a division
 * @a: number a
 * @b: number b
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that return the remainder
 * of a division
 * @a: number a
 * @b: number b
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
