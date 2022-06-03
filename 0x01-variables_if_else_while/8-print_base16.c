#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char number = '0';
	char letters = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
