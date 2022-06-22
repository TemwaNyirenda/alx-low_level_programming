#include "main.h"

int factors(int num, int num_check);

/**
 * is_prime_number - checks whether integer n is a prime number
 * @n: integer to be determined if it's a prime number
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (factors(n, n - 1));
}

/**
 * factors - checks if a number has factors other than itself or 1
 * @num: the number that will be checked
 * @num_check: factors that will be checked against number
 *
 * Return: 1 if number is a prime number, 0 otherwise
 */
int factors(int num, int num_check)
{
	if (num <= 1)
		return (0);
	if (num_check == 1)
		return (1);
	if (num % num_check == 0)
		return (0);

	return (factors(num, num_check - 1));
}
