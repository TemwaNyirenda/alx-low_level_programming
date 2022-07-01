#include "main.h"
#include <stdlib.h>
#include <stddef.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates the memory pointed to by pointer
 *	from size old_size to size new_size
 * @ptr: pointer to memory previously allocated
 * @old_size: the size of allocated space for ptr
 * @new_size: size of new memory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		if (ptr != NULL)
		{
			_memcpy(new_ptr, ptr, old_size);

			free(ptr);
		}
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		free(ptr);
	}

	return (new_ptr);
}

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
