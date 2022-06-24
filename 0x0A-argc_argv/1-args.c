#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the total count of arguments
 * @argv: pointer to the array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
