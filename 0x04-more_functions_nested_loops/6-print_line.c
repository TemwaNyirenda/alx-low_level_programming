#include "main.h"

/**
 * print_line - print character '_' n times
 * @n: number of times '_' is printed
 *
 * Return: void - nothing
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
