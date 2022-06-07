#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers less than 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib_1 = 1, fib_2 = 2, fib_3 = 3, sum = 0;

	for (; fib_1 < 4000000;)
	{
		if (fib_1 % 2 == 0)
		{
			sum += fib_1;
		}
	}
	printf("%d\n", sum);

	return (0);
}
