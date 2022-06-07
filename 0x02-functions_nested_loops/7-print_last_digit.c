#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 * @n: the number which the last digit will be computed from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}

	last_digit = n % 10;

	_putchar(last_digit + 48);

	return (last_digit);
}
