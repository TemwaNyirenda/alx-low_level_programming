#include "main.h"
#include <stdlib.h>
#include <stddef.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory to an array of nmemb elements of size size each
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: a pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	ptr = _memset(ptr, 0, nmemb);

	return (ptr);
}

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
