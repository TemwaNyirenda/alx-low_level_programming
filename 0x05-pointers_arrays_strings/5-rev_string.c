#include "main.h"

/**
 * rev_string - reverses a string using a pointer to dereference string
 * @s: the string to be reversed
 *
 * Return: void - nothing
 */
void rev_string(char *s)
{
	int index, index2;
	char temp, temp2;

	for (index = 0; *(s + index) != 0; index++)
		;

	index--;

	for (index2 = 0; index >= index2; index--, index2++)
	{
		temp = *(s + index2);
		temp2 = *(s + index);
		s[index] = temp;
		s[index2] = temp2;
	}
}
