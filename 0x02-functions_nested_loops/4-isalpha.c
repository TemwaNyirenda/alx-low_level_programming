#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabetic character
 *
 * Description: if the character is an alphabetic character,
 * function will return 1, otherwise, will return 0
 * @c: the character to be checked
 *
 * Return: 1 if character is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
