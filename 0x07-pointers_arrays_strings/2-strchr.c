#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string where the character will be located
 * @c: the character to be located
 *
 * Return: a pointer to the first occurance of the character
 */
char *_strchr(char *s, char c)
{
	int index;
	char *first_occur_ptr;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			first_occur_ptr = &s[index];
			return (first_occur_ptr);
		}
	}

	return (NULL);
}
