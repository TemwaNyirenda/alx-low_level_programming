#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: the string that length will be calculated on
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int index = 0, count = 0;

	while (*(s + index) != '\0')
	{
		count++;
		index++;
	}

	return (count);
}
