#include "function_pointers.h"

/**
 * print_name - funtion that prints a name
 * @name: the string parameter
 * @f: pointer to fuction that takes a char * as a parameter and returns void
 *
 * Return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
