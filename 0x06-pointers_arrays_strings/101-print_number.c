#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: the number to be printed
 *
 * Return: void - nothing
 */
void print_number(int n)
{
	int bil, top, remainder = n;

	if (n < 0)
		_putchar('-');

	for (bil = 1000000000; bil >= 1; remainder %= bil, bil /= 10)
	{
		top = remainder / bil;

		if (top >= 0)
		{
			if (top == 0 && n >= bil * 10)
			{
				_putchar(top + '0');
			}
			else if (top != 0)
			{
				_putchar(top + '0');
			}
		}
		else
			_putchar(-top + '0');

	}
		if (top == 0 && n < 10)
			_putchar('0');
}
