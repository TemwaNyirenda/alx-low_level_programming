#include <stdio.h>

/**
 * main - computes and print the sum of all multiples of 3 or 5 less than 1024
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, number;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0)
		{
			sum += number;
		}
		else if (number % 5 == 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);

	return (0);
}
