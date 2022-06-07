#include "main.h"

/**
 * _abs - prints the absolute value of int n
 * @n: the int the function will print the absolute value from
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
