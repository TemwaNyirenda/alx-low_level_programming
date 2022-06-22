#include "main.h"
/* #include <stdio.h> */

int find_match(char *s1, char *s2);
int _strlen_recursion(char *s);
char *check_astericks(char *s);

/**
 * wildcmp - compares two string to see if they are considered identical
 * @s1: first string
 * @s2: second string (can contain special character *)
 *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int s1_len = _strlen_recursion(s1);
	int s2_len = _strlen_recursion(s2);

/*	printf("\t\t NEW TEST\n"); */

	if (s1_len == 0 && s2_len == 0)
		return (1);


	if (find_match(s1, s2) == 1)
		return (1);
	else
		return (4);


	return (8);

}

/**
 * find_match - matches the chars in s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int find_match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*check_astericks(s2) == '\0')
		{
			return (1);
		}
		else
		{
			s2 = check_astericks(s2);
/*			printf("\ts2 at this point is %c\n", *s2); */
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (find_match(s1 + 1, s2 + 1));
	else
		return (0);



}



/**
 * check_astericks - checks a string to see if it's only made up of *
 * @s: the string to be checked
 *
 * Return: the s position to null terminator if all chars are *,
 *	otherwise, returns the s position after the initial *'s
 */
char *check_astericks(char *s)
{
	if (*s == '\0')
		return (s);
	if (*s != '*')
	{
/*		printf ("\ns is not a *, it's %c\n", *s); */
		return (s);
	}
	else
	{
/*		printf ("\ns is a *, look %c\n", *s); */
		return (check_astericks(s + 1));
	}
}

/**
 * _strlen_recursion - calculates the length of the string recursively
 * @s: the string that the length will be calculated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);

	len = 1 + _strlen_recursion(s + 1);

	return (len);
}
