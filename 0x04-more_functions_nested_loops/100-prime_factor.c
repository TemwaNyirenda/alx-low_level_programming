#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int prime, largest_prime, num = 612852475143, quotient = num;

	for (prime = 2; prime <= quotient; prime++)
	{
		while (quotient % prime == 0)
		{
			largest_prime = prime;
			quotient = quotient / prime;
		}
	}
	printf("%ld\n", largest_prime);

	return (0);
}
