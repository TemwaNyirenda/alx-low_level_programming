#include "main.h"

/**
 * _memcpy - copies a memory area
 * @src: the source memory area where the n bytes will be copied from
 * @n: the number of bytes that will be copied from memory area src to dest
 * @dest: the destination memory area where the n bytes will be copied
 *
 * Return: a pointer to the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
