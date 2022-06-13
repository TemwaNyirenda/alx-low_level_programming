#include "main.h"

/**
 * _strcpy - copies a string
 *
 * Description: copies string pointed to by src, including null terminator,
 * to the buffer pointed to by dest
 * @src: pointer pointing to original string
 * @dest: pointer that copies string onto buffer
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; *(src + index) != '\0'; index++)
		*(dest + index) = *(src + index);
	*(dest + index) = '\0';

	return (dest);
}
