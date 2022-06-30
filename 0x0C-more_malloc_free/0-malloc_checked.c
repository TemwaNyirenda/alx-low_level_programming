#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocated memory of size b using malloc
 * @b: size of memory allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
