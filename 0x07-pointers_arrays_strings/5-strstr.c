#include "main.h"
#include <stddef.h>

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
	char *ptr_first_occur;

	for (index_h = 0; haystack[index_h] != '\0'; index_h++)
	{
		if (haystack[index_h] == needle[0])
		{
			for (index_n = 0; ; count++, index_h++, index_n++)
			{
				if (needle[index_n] == '\0')
				{

					ptr_first_occur =
						&haystack[index_h - count];
					return (ptr_first_occur);
				}
				if (haystack[index_h] == needle[index_n])
					continue;
				else
					break;
			}
		}
	}

	return (NULL);
}
