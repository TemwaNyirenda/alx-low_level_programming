#include "main.h"

/**
 * times_table - prints the 9 timeable, starting from 0
 *
 * Return: void - nothing
 */
void times_table(void)
{
	int rows, columns, product, tens, units;

	columns = 0;
	while (columns <= 9)
	{
		rows = 0;
		while (rows <= 9)
		{
			product = columns * rows;
			units = product % 10;
			tens = product / 10;

			if (tens == 0 && rows != 0)
			{
				_putchar(' ');
			}
			if (tens != 0)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
			if (rows != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			rows++;
		}
		columns++;
	}
}
