#include "main.h"

/**
 * cap_string - capitalized all words in a string
 * 	Separators of words: space, tabulation, new line, ',', ';', '.', '!',
 * 	'?', '"', '(', ')', '{', and '}'
 * @str: string used for operation
 *
 * Return: the string with capitalized words
 */
char *cap_string(char *str)
{
	int index;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (index = 1; str[index] != '\0'; index++)
	{
		if ((str[index - 1] == ' ' || str[index - 1] == '\t' ||
			str[index - 1] == '\n' || str[index - 1] == ',' ||
			str[index - 1] == ';' || str[index - 1] == '.' ||
			str[index - 1] == '!' || str[index - 1] == '?' ||
			str[index - 1] == '"' || str[index - 1] == '(' ||
			str[index - 1] == ')' || str[index - 1] == '{' ||
			str[index - 1] == '}') &&
			(str[index] >= 97 && str[index] <= 122))
			str[index] -= 32;
	}

	return (str);
}
