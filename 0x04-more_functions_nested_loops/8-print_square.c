#include "main.h"

/**
 * print_square - prints a square where int size is its size
 * @size: the size of the square
 *
 * Return: void - nothing
 */
void print_square(int size)
{
	int line, hashes;

	if (size > 0)
		for (line = 1; line <= size; line++)
		{
			for (hashes = 1; hashes <= size; hashes++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
