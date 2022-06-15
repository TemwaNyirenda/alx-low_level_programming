#include "main.h"

/**
 * _strcat - appends string src to string dest
 * @dest: first string that second string will be appended to
 * @src: second string to be appended to first string
 *
 * Return: the concanted string as string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src[src_len] != '\0'; src_len++, dest_len++)
		dest[dest_len] = src[src_len];

	dest[dest_len] = '\0';

	return (dest);
}
