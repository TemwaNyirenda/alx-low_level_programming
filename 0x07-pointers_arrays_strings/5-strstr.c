#include "main.h"

int _strlen(char *s);

/**
 *  * _strstr - searches first string for the first occurance of the substring
 *   * @haystack: the string to be searched
 *    * @needle: the substring to be searched for
 *     *
 *      * Return: the pointer to the beginning of the located string
 *       * or NULL if no substring
 *        */
char *_strstr(char *haystack, char *needle)
{
		int n = 0;
			int m = 0;
				int len_needle = 0;

					len_needle = _strlen(needle) - 1;
						if (_strlen(needle) == 0)
								{
											return (haystack);
												}
							for (n = 0; *(haystack + n) != '\0'; n++)
									{
												for (m = 0; *(needle + m) != '\0'; m++)
															{
																			while (*(haystack + n) == *(needle + m))
																							{
																												n++;
																																m++;
																																				if ((m == len_needle) &&
																																										*(haystack + n) == *(needle + len_needle))
																																									{
																																															return (haystack + (n - len_needle));
																																																			}
																																							}
																					}
													}
								return ('\0');
}

/**
 *  * _strlen - calculates the length of a string
 *   * @s: The string that the length will be calculated on
 *    *
 *     * Return: The length of the string
 *      */
int _strlen(char *s)
{
		int n = 0;

			while (*s != '\0')
					{
								s++;
										n++;
											}

				return (n);
}
