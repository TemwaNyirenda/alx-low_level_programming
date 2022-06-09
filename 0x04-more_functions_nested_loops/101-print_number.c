#include "main.h"
#include <stdio.h>

void print_number_continued(int abs_n, int remainder);

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void - nothing
 */
void print_number(int n)
{
	int remainder = n, abs_n;

	if (n < 0)
		_putchar('-');
	if (n >= 1000000000 || n <= -1000000000)
	{
		if (remainder < 0)
		{
			_putchar((remainder / 1000000000) * -1 + '0');
			remainder = remainder % 1000000000;
		}
		else
		{
			_putchar(remainder / 1000000000 + '0');
			remainder = remainder % 1000000000;
		}
	}
	if (n < 0)
		remainder = remainder * -1;

	abs_n = remainder;

	if (abs_n >= 100000000)
	{
		_putchar(remainder / 100000000 + '0');
		remainder = remainder % 100000000;
	}
	if (abs_n >= 10000000)
	{
		_putchar(remainder / 10000000 + '0');
		remainder = remainder % 10000000;
	}

	print_number_continued(abs_n, remainder);
}

/**
 * print_number_continued - continues function bc 40 line restriction
 * @abs_n: the absolute value of n % 1000000000
 * @remainder: remaining digits to be printed
 *
 * Return: void - nothing
 */
void print_number_continued(int abs_n, int remainder)
{

	if (abs_n >= 1000000)
	{
		_putchar(remainder / 1000000 + '0');
		remainder = remainder % 1000000;
	}

	if (abs_n >= 100000)
	{
		_putchar(remainder / 100000 + '0');
		remainder = remainder % 100000;
	}
	if (abs_n >= 10000)
	{
		_putchar(remainder / 10000 + '0');
		remainder = remainder % 10000;
	}
	if (abs_n >= 1000)
	{
		_putchar(remainder / 1000 + '0');
		remainder = remainder % 1000;
	}
	if (abs_n >= 100)
	{
		_putchar(remainder / 100 + '0');
		remainder = remainder % 100;
	}
	if (abs_n >= 10)
	{
		_putchar(remainder / 10 + '0');
		remainder = remainder % 10;
	}
	_putchar(remainder % 10 + '0');
}
