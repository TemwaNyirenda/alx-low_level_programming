#include <stdio.h>

/**
 * main - prints single digits of base 10 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + 48);
		number++;
	}
	putchar('\n');

	return (0);
}
