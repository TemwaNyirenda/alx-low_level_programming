#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers recieved from the command line
 * @argc: the number of arguments received
 * @argv: the pointer to the arguments received
 *
 * Return: 0 (success) if program receives two arguments, else prints 1
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
