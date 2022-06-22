#include "main.h"

/**
 * factorial - calculates the factorial of a number using recursion
 * @n: the number that the factorial will be calculated
 *
 * Return: the factorial of number n, or if n < 0, returns -1
 */
int factorial(int n)
{
	int factorial_result;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	factorial_result = n * factorial(n - 1);

	return (factorial_result);
}
