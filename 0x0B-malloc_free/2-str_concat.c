#include "main.h"
#include <stdlib.h>
#include <stddef.h>

unsigned int _strlen(char *str);

/**
 * str_concat - creates a memory space where it concatenates two strings
 * @s1: string one to be concatenated with string s2
 * @s2: string two to be concatenated with string s1
 *
 * Return: the pointer to the newly allocated memory space, NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len_s1, len_s2;
	char *ptr;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; j < len_s1; i++, j++)
	{
		ptr[i] = s1[j];
	}

	for (j = 0; j <= len_s2; i++, j++) /* will copy null terminator here */
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}

/**
 * _strlen - calculates the length of string str
 * @str: string that the length will be calculated
 *
 * Return: the length of string str
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
