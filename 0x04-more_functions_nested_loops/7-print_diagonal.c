#include "main.h"

/**
 * print_diagonal - draws diagonal line across the terminal, n number of times
 * @n: the number of times character '\' will be printed
 *
 * Return: void - nothing
 */
void print_diagonal(int n)
{
	int blanks, line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (blanks = 1; blanks < line; blanks++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
