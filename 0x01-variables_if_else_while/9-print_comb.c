#include <stdio.h>

/**
 * main - print all combinations of single digits followed by a comma and space
 *
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + 48);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
