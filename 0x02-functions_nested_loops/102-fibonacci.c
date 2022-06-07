#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib_1 = 1, fib_2 = 2, fib_3, count;

	for (count = 1; count <= 50; count++)
	{
		fib_3 = fib_1 + fib_2;

		printf("%lu", fib_1);

		if (count != 50)
		{
			printf(", ");
		}

		fib_1 = fib_2;
		fib_2 = fib_3;
	}
	printf("\n");

	return (0);
}
