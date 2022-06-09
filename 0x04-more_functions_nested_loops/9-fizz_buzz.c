#include <stdio.h>

/**
 * main - prints 1 to 100 with multiplies of 3, 5, and 15 replaced
 *
 * Description: multiples of 3 -> "Fizz", 5 -> "Buzz", and 3 & 5 -> "FizzBuzz"
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num < 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
