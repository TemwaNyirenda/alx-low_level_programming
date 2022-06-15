#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int index;
	/* array from ascii 65 to 122 to translate to new character */
	char rot13[58] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M',
		'0', '0', '0', '0', '0', '0',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm'};

	for (index = 0; str[index] != '\0'; index++)
	{
		if ((str[index] >= 65 && str[index] <= 90) ||
			(str[index] >= 97 && str[index] <= 122))
		{
			str[index] = rot13[str[index] - 65];
		}
	}

	return (str);
}
