#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sume of a square matrix of integers
 * @a: the square matrix of integers that the sum of diagonals will be printed
 * @size: the size of the square matrix
 *
 * Return: void - nothing
 */
void print_diagsums(int *a, int size)
{
	int sum_R2L = 0, sum_L2R = 0, index1;

	for (index1 = 0; index1 <= size * size - 1; index1 += size + 1)
		sum_R2L += a[index1];

	printf("%d, ", sum_R2L);

	for (index1 = (size * size - 1) - (size - 1); index1 >= size - 1;
			index1 -= size - 1)
		sum_L2R += a[index1];

	printf("%d\n", sum_L2R);
}
