#include <stdio.h>

/**
 * main - prints all arguments it receives including the first one
 * @argc: the number of arguments received
 * @argv: pointer to the array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
