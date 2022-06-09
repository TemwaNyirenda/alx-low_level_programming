#include "main.h"

/**
 * print_triangle - prints a triagle with base and heigth of int size
 * @size: the size of the base and height of the triangle
 *
 * Return: void - nothing
 */
void print_triangle(int size)
{
	int line, blanks, hashes;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (blanks = size - line; blanks >= 1; blanks--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= line; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
