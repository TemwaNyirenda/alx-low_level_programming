#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers, starting from 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long count, bil = 1000000000, carry1stbil, carry2ndbil,
	f1_1stbil = 1, f1_2ndbil = 0, f1_3rdbil = 0, f2_1stbil = 2,
	f2_2ndbil = 0, f2_3rdbil = 0, f3_1stbil = 0, f3_2ndbil = 0,
       	f3_3rdbil = 0;

	for (count = 1; count <= 98; count++)
	{
		carry1stbil = 0;
		carry2ndbil = 0;

		if (f1_3rdbil > 0)
			printf("%lu", f1_3rdbil);
		if (f1_2ndbil > 0 && f1_2ndbil == 0)
			printf("%09lu", f1_2ndbil);
		else if (f1_2ndbil > 0)
			printf("%lu", f1_2ndbil);
		if (f1_2ndbil > 0)
			printf("%09lu", f1_1stbil);
		else
			printf("%lu", f1_1stbil);
		if (count != 98)
			printf(", ");

		f3_1stbil = f1_1stbil + f2_1stbil;
		if (f3_1stbil > bil)
			carry1stbil = f3_1stbil / bil;
		f3_2ndbil = f1_2ndbil + f2_2ndbil + carry1stbil;
		if (f3_2ndbil > bil)
			carry2ndbil = f3_2ndbil / bil;
		f3_3rdbil = f1_3rdbil + f2_3rdbil + carry2ndbil;
		f1_1stbil = f2_1stbil;
		f1_2ndbil = f2_2ndbil;
		f1_3rdbil = f2_3rdbil;
		f2_1stbil = f3_1stbil % bil;
		f2_2ndbil = f3_2ndbil % bil;
		f2_3rdbil = f3_3rdbil;
	}
	printf("\n");
	return (0);
}
