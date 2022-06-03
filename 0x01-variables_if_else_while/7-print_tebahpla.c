#include <stdio.h>

/**
 * main - prints the lowercase alphabet backwards
 *
 * Return: 0
 */
int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');

	return (0);
}
