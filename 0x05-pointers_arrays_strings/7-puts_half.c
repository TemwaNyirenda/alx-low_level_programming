#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string for which the second half will be printed
 *
 * Return: void - nothing
 */
void puts_half(char *str)
{
	int len, start;

	for (len = 0; *(str + len); len++)
		;

	for (start = len / 2; start < len; start++)
		_putchar(*(str + start));

	_putchar('\n');
}
