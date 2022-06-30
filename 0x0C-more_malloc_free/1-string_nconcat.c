#include "main.h"
#include <stdlib.h>
#include <stddef.h>

unsigned int _strlen(char *str);

/**
 * string_nconcat - concatenates n bytes of string s2 to string s1
 *	and allocates memory to new string
 * @s1: first string in the concatenation
 * @s2: second string in the concatenation
 * @n: the number of bytes that will be concatenated from string s1
 *
 * Return: pointer to the newly allocated space of memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (n > _strlen(s2))
		n = _strlen(s2);

	ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	/* +1 for null termination */
	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; j < _strlen(s1); i++, j++)
		ptr[i] = s1[j];

	for (j = 0; j < n; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string used in the calculation
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
