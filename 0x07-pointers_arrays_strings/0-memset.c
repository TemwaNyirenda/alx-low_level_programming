#include "main.h"

/**
 * _memset - fills memory with a constant byte, b
 * @s: the memory area to be filled
 * @b: the constant byte that will fill the memory
 * @n: the amount of bytes in memory area s will be filled with b
 *
 * Return: a point to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
