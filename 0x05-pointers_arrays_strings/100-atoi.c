#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int num = 0, index, minus_count;


	for (index = 0, minus_count = 0; *(s + index) != '\0'; index++)
	{
		if (*(s + index) == '-')
			minus_count++;
		if (*(s + index) >= '0' && *(s + index) <= '9')
		{
			num *= 10;
			num += (*(s + index) - '0');
			if (!(*(s + index + 1) >= '0' &&
				*(s + index + 1) <= '9'))
				break;
		}
	}

	if (minus_count % 2 != 0)
		num = -num;

	return (num);
}
