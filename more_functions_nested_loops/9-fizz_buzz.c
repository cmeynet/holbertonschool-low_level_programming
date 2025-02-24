#include <stdio.h>

/**
 * main - Function that print number from 0 to 100
 * replacing multiples of 3 with fizz
 * replacing multiples of 5 with buzz
 * replacing both multiples of 3 and 5 with fizz buzz
 *
 * Return: fizz buzz test
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
