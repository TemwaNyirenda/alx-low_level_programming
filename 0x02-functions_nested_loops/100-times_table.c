#include "main.h"

/**
 * print_times_table - print the times table starting from 0 up to n
 * @n: the times table will go up to this number
 *
 * Return: void - nothing
 */
void print_times_table(int n)
{
	int rows, columns, product, hundreds, tens, units;

	if (n >= 0 && n <= 15)
	{
		for (columns = 0; columns <= n; columns++)
		{
			for (rows = 0; rows <= n; rows++)
			{
				product = rows * columns;
				hundreds = product / 100;
				tens = (product / 10) % 10;
				units = product % 10;

				if (rows != 0)
				{

					if (hundreds == 0)
						_putchar(' ');
					else
						_putchar(hundreds + '0');
					if (product < 10)
						_putchar(' ');
					else
						_putchar(tens + '0');
				}
				_putchar(units + '0');
				if (rows != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
