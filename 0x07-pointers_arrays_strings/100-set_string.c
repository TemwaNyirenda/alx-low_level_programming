#include "main.h"

/**
 * set_string - sets the value of the pointed to a string (char)
 * @s: the pointer that will be pointed to the string
 * @to: the string that pointer s will point to
 *
 * Return: nothing - void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
