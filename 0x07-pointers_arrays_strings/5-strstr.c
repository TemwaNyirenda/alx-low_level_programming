#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - locates first occurance of the string needle in string haystack
 * @haystack: string that will be checked for substring
 * @needle: the string that will be used to find in string haystack
 *
 * Return: a pointer to the first occurance of the substring,
 *	if no occurance, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index_h, index_n, count = 0;

	if (needle[0] == '\0')
		return (haystack);

	for (index_h = 0; haystack[index_h] != '\0'; index_h++)
	{
		if (haystack[index_h] == needle[0])
		{
			for (index_n = 0; ; count++, index_h++, index_n++)
			{
				if (needle[index_n] == '\0')
					return (haystack + (index_h - count));
				if (haystack[index_h] == needle[index_n])
					continue;
				else
					break;
			}
		}
	}

					return (haystack + (index_h - count));
}
