#include <stdio.h>

/**
 * main - prints the lowercase alphabet except letter 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}
		putchar(lowercase);
	}
	putchar('\n');

	return (0);
}
