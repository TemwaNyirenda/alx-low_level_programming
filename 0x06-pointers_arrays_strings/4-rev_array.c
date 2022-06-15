#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: the number of elements in the array
 *
 * Return: void - nothing
 */
void reverse_array(int *a, int n)
{
	int temp_start, temp_end, index_start, index_end;

	for (index_start = 0, index_end = n - 1; index_start <= index_end;
			index_start++, index_end--)
	{
		temp_start = a[index_start];
		temp_end = a[index_end];
		a[index_start] = temp_end;
		a[index_end] = temp_start;
	}
}
