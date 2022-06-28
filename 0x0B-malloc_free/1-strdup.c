#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copies a string to a newly allocated space of memory
 * @str: the string to be copied
 *
 * Return: a pointer to the newly allocated memory,
 *	or NULL if str = NULL or insufficient memory available
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= sizeof(str); i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
