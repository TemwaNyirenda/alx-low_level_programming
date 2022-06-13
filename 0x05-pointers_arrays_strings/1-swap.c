#include "main.h"

/**
 * swap_int - swaps the values of two integers pointed to by pointers *a and *b
 * @a: int variable to be swapped with b
 * @b: int variable to be swapped with a
 *
 * Return: void - nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
