#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: a 2D array with second subscript of 8
 *
 * Return: void - nothing
 */
void print_chessboard(char (*a)[8])
{
	int first_subscript, second_subscript;

	for (first_subscript = 0; first_subscript < 8; first_subscript++)
	{
		for (second_subscript = 0; second_subscript < 8;
				second_subscript++)
		{
			_putchar(a[first_subscript][second_subscript]);
		}
		_putchar('\n');
	}
}
