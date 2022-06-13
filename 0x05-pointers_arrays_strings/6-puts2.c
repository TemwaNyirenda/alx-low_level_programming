#include "main.h"

/**
 * puts2 - prints every other character of string, starting with 1st character
 * @str: string that will be used
 *
 * Return: void - nothing
 */
void puts2(char *str)
{
	int index, index2;

	for (index = 0, index2 = 0;
		*(str + index) != '\0' && *(str + index2) != '\0';
		index = index + 2, index2 = index - 1)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
