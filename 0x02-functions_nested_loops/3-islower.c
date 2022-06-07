#include "main.h"

/**
 * _islower - checks whether a character is lowercase
 *
 * Description: if the character c is lowercase than returns 1, else returns 0
 * @c: the character to be checked
 *
 * Return: 1 if character is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
