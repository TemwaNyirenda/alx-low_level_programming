#include "main.h"

/**
 * _strncat - appends n bytes of string src onto string dest
 * @dest: first string that n bytes of string src will be appended on
 * @src: second string that n bytes will be appended on string dest
 * @n: the number of bytes that will be appended from string src
 *
 * Return: the concatenated string in string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src_len < n && src[src_len] != '\0';
			src_len++, dest_len++)
		dest[dest_len] = src[src_len];

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	if (n > src_len)
		dest[dest_len] = '\0';

	return (dest);
}
