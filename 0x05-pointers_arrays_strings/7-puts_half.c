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

	if (len % 2 == 0)
		start = len / 2;
	else
		start = len / 2 + 1;

	for (; start < len; start++)
		_putchar(*(str + start));

	_putchar('\n');
}
