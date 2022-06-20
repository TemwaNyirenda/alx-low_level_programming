#include "main.h"

/**
 * _strspn - determines the length of string s that matches string accept
 *	(will stop counting when a character in s does not match any in accept)
 * @s: the string that will be checked against string accept
 * @accept: the string that will be used to see if string s matches
 *
 * Return: the lenght of the substring s that matches string accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_index, accept_index, count = 0, count_before;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		count_before = count;
		for (accept_index = 0; accept[accept_index] != '\0';
				accept_index++)
		{
			if (s[s_index] == accept[accept_index])
				count++;
		}
		if (count_before == count)
			return (count);
	}

	return (count);
}
