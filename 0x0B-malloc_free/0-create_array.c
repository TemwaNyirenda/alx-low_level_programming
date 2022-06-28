#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of char and initializes it to char c
 * @size: the size of the array created
 * @c: the char that the array will be initialized to
 *
 * Return: the pointer to the array or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
