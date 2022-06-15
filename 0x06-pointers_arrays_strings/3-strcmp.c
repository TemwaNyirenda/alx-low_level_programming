#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the integer difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index - 1] != '\0' || s2[index - 1] != '\0';
			index++)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}

	return (0);
}
