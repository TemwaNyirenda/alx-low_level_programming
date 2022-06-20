#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches string s to find the first occurance of when
 *	a character matches any character in string accept
 * @s: the string to be searched
 * @accept: the string whose characters will be matched against string s
 *
 * Return: a pointer to the first occurance of the matching characters
 */
char *_strpbrk(char *s, char *accept)
{
	int s_index, accept_index;
	char *ptr_first_occur;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0';
				accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				ptr_first_occur = &s[s_index];
				return (ptr_first_occur);
			}
		}
	}

	return (NULL);
}
