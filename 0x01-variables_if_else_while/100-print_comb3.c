#include <stdio.h>

/**
 * main - print all possible dif combi of two digits except if digits are same
 *
 * Return: 0
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = number1 + 1; number2 < 10; number2++)
		{
			putchar(number1 + '0');
			putchar(number2 + '0');
			if (number1 == 8 && number2 == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

