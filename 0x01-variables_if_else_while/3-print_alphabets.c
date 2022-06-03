#include <stdio.h>

/**
 * main - prints the lowercase alphabet then the uppercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
	}
	putchar('\n');

	return (0);
}
