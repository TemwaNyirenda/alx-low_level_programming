#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet using _putchar
 *
 * Return: nothing - void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
