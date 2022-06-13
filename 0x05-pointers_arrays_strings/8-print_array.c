#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n number of elements from the array
 * @a: pointer to the array
 * @n: the number of elements that will be printed
 *
 * Return: void - nothing
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", *(a + index));
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
