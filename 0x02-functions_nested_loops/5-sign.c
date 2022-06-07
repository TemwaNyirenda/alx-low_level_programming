#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Description: If int n is greater than 0, it prints + and returns 1,
 * if int n is 0, it prints 0 and returns 0,
 * if int n is less than zero, it print - and returns -1
 * @n: int to be checked
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
