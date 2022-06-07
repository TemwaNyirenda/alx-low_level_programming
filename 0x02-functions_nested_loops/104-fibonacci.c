#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers, starting from 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long count, bil = 1000000000,
	      carryover_first_bil = 0, carryover_second_bil = 0,
	      fib_1_first_bil = 1, fib_1_second_bil = 0, fib_1_third_bil = 0,
	      fib_2_first_bil = 2, fib_2_second_bil = 0, fib_2_third_bil = 0,
	      fib_3_first_bil = 0, fib_3_second_bil = 0, fib_3_third_bil = 0;

	for (count = 1; count <= 98; count++)
	{
		carryover_first_bil = 0;
		carryover_second_bil = 0;

		if (fib_1_third_bil > 0)
			printf("%09lu", fib_1_third_bil);
		if (fib_1_second_bil > 0)
			printf("%09lu", fib_1_second_bil);
		printf("%09lu", fib_1_first_bil);
		if (count != 98)
			printf(", ");

		fib_3_first_bil = fib_1_first_bil + fib_2_first_bil;
		if (fib_3_first_bil > bil)
			carryover_first_bil = fib_3_first_bil / bil;
		fib_3_second_bil = fib_1_second_bil + fib_2_second_bil
			+ carryover_first_bil;
		if (fib_3_second_bil > bil)
			carryover_second_bil = fib_3_second_bil / bil;
		fib_3_third_bil = fib_1_third_bil + fib_2_third_bil
			+ carryover_second_bil;
		fib_1_first_bil = fib_2_first_bil;
		fib_1_second_bil = fib_2_second_bil;
		fib_1_third_bil = fib_2_third_bil;
		fib_2_first_bil = fib_3_first_bil % bil;
		fib_2_second_bil = fib_3_second_bil % bil;
		fib_2_third_bil = fib_3_third_bil;
	}
	printf("\n");
	return (0);
}
