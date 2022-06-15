#include "main.h"

/**
 * _strncpy - copies n bytes of strng src to string dest
 * @dest: the string that the n bytes from src will be copied to
 * @src: the string that n bytes will be copied from
 * @n: the number of bytes that will be copied from string src to string dest
 *
 * Return: the new dest string with copied bytes from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len;

	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
		dest[src_len] = src[src_len];

	if (src[src_len] == '\0')
		dest[src_len] = '\0';

	if (src_len < n && src[src_len] == '\0')
	{
		for (src_len++; src_len < n; src_len++)
			dest[src_len] = 0;
	}

	return (dest);
}
