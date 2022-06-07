#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 *
 * Return: void - nothing
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 1;

	while (count <= 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
