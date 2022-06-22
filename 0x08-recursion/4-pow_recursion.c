#include "main.h"

/**
 * _pow_recursion - calculates value of x raised to the power y, recursively
 * @x: the base number
 * @y: the number that x will be raised to
 *
 * Return: the value of the calculation, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int power_to;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	power_to = x * _pow_recursion(x, --y);

	return (power_to);
}
