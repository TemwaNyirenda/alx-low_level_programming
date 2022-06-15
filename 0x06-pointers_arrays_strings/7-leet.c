#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	/* array to translate ascii 65 to 122 to following*/
	int translate[58] = {4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0,
				0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
				0, 0, 0, 0, 0, 0,
				4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0,
				0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0};
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == 'a' || str[index] == 'A' ||
		       str[index] == 'e' || str[index] == 'E' ||
		       str[index] == 'o' || str[index] == 'O' ||
		       str[index] == 't' || str[index] == 'T' ||
		       str[index] == 'l' || str[index] == 'L')
			str[index] = translate[str[index] - 65] + '0';
	}

	return (str);
}
