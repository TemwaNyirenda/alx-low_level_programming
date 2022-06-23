#include "main.h"
 #include <stdio.h> 

int iterate_s1 (char *s1, char *s2, int index_s1, int index_s2);
int find_match(char *s1, char *s2, int index_s1, int index_s2, int after_ast);
int check_astericks(char *s2, int index_s2);
int _strlen_recursion(char *s);

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

	printf("\t\t NEW TEST\n"); 

	if (s1_len == 0 && s2_len == 0)
		return (1);


	if (find_match(s1, s2, 0, 0, 0) == 1)
		return (1);
	else
		return (4);

}



int iterate_s1 (char *s1, char *s2, int index_s1, int index_s2)
{	
	if (*(s1 + index_s1) == '\0')
		return (-1);
	if (*(s1 + index_s1) == *(s2 + index_s2))
	{
		printf("\titerate is returning to find_match\ts2 is %c  at %d \t s1 is %c at %d\n", *(s2 + index_s2), index_s2, s1[index_s1], index_s1);
		return (index_s1);
	}
	else
	{
		printf("\titerate is going through another iterate\ts2 is %c  at %d \t s1 is %c at %d\n", *(s2 + index_s2), index_s2, s1[index_s1], index_s1);
		return(iterate_s1 (s1, s2, index_s1 + 1, index_s2));
	}
}

/**
 * find_match - matches the chars in s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int find_match(char *s1, char *s2, int index_s1, int index_s2, int after_ast)
{
	int asterick_check, s1_iterate;

	if (*(s2 + index_s2) == '*')
	{
		asterick_check = check_astericks(s2, index_s2);
		if (asterick_check == -1)
		{
			return (1);
		}
		else
		{
			index_s2 = asterick_check;
			after_ast = asterick_check; /* store index after ast */
			printf("\t index_s2 is %d which should = store_index which is %d\n", index_s2, after_ast);

			printf("\ts1 at this point is %c  at %d\n", *(s1 + index_s1), index_s1); 
			printf("\ts2 at this point is %c  at %d\n", *(s2 + index_s2), index_s2); 
		}
	}
	if (*(s1 + index_s1) == '\0' && *(s2 + index_s2) == '\0')
		return (1);

	if (*(s1 + index_s1) == *(s2 + index_s2))
		return (find_match(s1, s2, index_s1 + 1, index_s2 + 1, after_ast));
	else
	{
		printf("\tthey don't match \ts2 is %c  at %d \t s1 is %c at %d\n", *(s2 + index_s2), index_s2, s1[index_s1], index_s1); 
		if (*(s2  + index_s2 - 1) == '*')
		{
			printf("but previous s2 was an *\n");
			s1_iterate = iterate_s1(s1, s2, index_s1, index_s2);
			if (s1_iterate == -1)
			{
				return (0);
			}
			else
			{
				index_s1 = s1_iterate;
				return (find_match(s1, s2, index_s1 + 1, index_s2 + 1, after_ast));
			}
		}
		else
		{
			printf("\tfind_match is restarting s2 after asterick\n");
			printf("\t store_index = %d\n", after_ast);
			
			s1_iterate = iterate_s1(s1, s2, index_s1, after_ast);

			if (s1_iterate == -1)
			{
				return (0);
			}
			else
			{
				index_s1 = s1_iterate;
				index_s2 = after_ast;
				return (find_match(s1, s2, index_s1 + 1, index_s2 + 1, after_ast));
			}
		}
	}

	return (0);


	



}



/**
 * check_astericks - checks a string to see if it's only made up of *
 * @s2: the string to be checked
 * @index_s2: the current index in string s2
 *
 * Return: the s position to null terminator if all chars are *,
 *	otherwise, returns the s position after the initial *'s
 */
int check_astericks(char *s2, int index_s2)
{
	if (*(s2 + index_s2) == '\0')
		return (-1); /* -1 bc returns index_s aswell, no confusion */
	if (*(s2 + index_s2) == '*')
	{
		printf ("\ts is a *, look %c at %d\n", *(s2 + index_s2), index_s2); 
		return(check_astericks(s2, index_s2 + 1));
	}
	else
	{
		printf ("\ts is not a *, it's %c  at %d\n", *(s2 + index_s2), index_s2); 
		return (index_s2);
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
