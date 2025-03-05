#include "main.h"
/**
 * _pow_recursion - Function that return
 * the value of x raised to the power of y.
 * @x: number for the base
 * @y: exponant
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	result = x * _pow_recursion(x, y - 1);
	return (result);
}
