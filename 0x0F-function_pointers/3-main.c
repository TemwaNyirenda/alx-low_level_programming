#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations,
 *	like addition, subtraction, multiplication, division, and modulous,
 *	depending on what arguments are passed to the function
 * @argc: the number of arguments passed to main
 * @argv: the string array of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*get_op_func(argv[2])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));

	return (0);
}
