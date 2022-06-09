#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times, using _putchar
 *
 * Return: void -  nothing
 */
void more_numbers(void)
{
	int num, line;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
