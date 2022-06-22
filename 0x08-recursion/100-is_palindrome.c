#include "main.h"

int _strlen_recursion(char *s);
int check_chars(char *s, int index_start, int index_end);

/**
 * is_palindrome - check whether a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_chars((s), 0, len - 1));
}

/**
 * check_chars - check if string is palindrome
 *	by comparing strings from the start and end of the string
 * @s: string to be checked
 * @index_start: checking chars starting from beginning of string
 * @index_end: checking chars starting from end of string
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int check_chars(char *s, int index_start, int index_end)
{
	if (index_end < 0)
		return (0);
	if (s[index_start] == s[index_end] && (index_start + 1) == index_end)
		return (1);
	if (index_start == index_end)
		return (1);
	if (s[index_start] == s[index_end])
		return (check_chars(s, index_start + 1, index_end - 1));
	else
		return (0);
}

/**
 * _strlen_recursion -  calculates the string length using recurssion
 * @s: string that string length will be calculated
 *
 * Return: the string length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);

	len = 1 + _strlen_recursion(s + 1);

	return (len);
}

