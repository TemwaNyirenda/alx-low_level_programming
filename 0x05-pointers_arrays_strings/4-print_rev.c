#include "main.h"

/**
 * print_rev - prints a string in reverse order followed by a new line
 * @s: the string that the reverse will be printed
 *
 * Return: void - nothing
 */
void print_rev(char *s)
{
	int index = 0;

	while (*(s + index) != '\0')
		index++;

	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}
	_putchar('\n');
}
