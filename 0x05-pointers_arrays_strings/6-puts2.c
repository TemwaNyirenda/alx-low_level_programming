#include "main.h"

/**
 * puts2 - prints every other character of string, starting with 1st character
 * @str: string that will be used
 *
 * Return: void - nothing
 */
void puts2(char *str)
{
	int index;

	for (index = 0; *(str + index); index = index + 2)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
