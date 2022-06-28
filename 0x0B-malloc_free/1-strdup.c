#include "main.h"
#include <stdlib.h>
#include <stddef.h>

unsigned int _strlen(char *str);

/**
 * _strdup - copies a string to a newly allocated space of memory
 * @str: the string to be copied
 *
 * Return: a pointer to the newly allocated memory,
 *	or NULL if str = NULL or insufficient memory available
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}

/**
 * _strlen - calculates the length of string str
 * @str: the string that the length will be calculated
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
