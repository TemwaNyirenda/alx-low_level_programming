#include "main.h"

int find_sqrt(int n, int sqrt);

/**
 * _sqrt_recursion - calculates the natural square root of a number n
 * @n: the number of which the natural square root will be calculated
 *
 * Return: -1 if no natural square root is found, the square root otherwise
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - finds the square root of n recursively
 * @n: the number that the natural square root will be found
 * @sqrt: the trial numbers to see if it's the square root
 *
 * Return: -1 if no natural square root is found, the square root otherwise
 */
int find_sqrt(int n, int sqrt)
{
	if (sqrt < 0)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);

	return (find_sqrt(n, sqrt + 1));
}
