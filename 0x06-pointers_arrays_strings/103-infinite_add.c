#include "main.h"

/**
 * infinite_add - adds two numbers in string form and returns sum in a string
 * @n1: number 1
 * @n2: number 2
 * @r: the buffer used to store the sum
 * @size_r: the size of the buffer
 *
 * Return: 0 if r can't be stored in buffer, else the sum in a string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_index, n2_index, buffer_index, n1_temp,
	    n2_temp, sum_temp, carryover = 0, remainder, move_index;

	for (n1_index = 0; n1[n1_index] != '\0'; n1_index++)
		;
	for (n2_index = 0; n2[n2_index] != '\0'; n2_index++)
		;

	n1_index -= 1;
	n2_index -= 1;
	r[size_r - 1] = '\0';
	for (buffer_index = size_r - 2; buffer_index >= 0;
			buffer_index--, n1_index--, n2_index--)
	{ /*buffer_index is -2 because of null terminator */
		n1_temp = n1[n1_index] - '0';
		if (n1_index < 0)
			n1_temp = 0;
		n2_temp = n2[n2_index] - '0';
		if (n2_index < 0)
			n2_temp = 0;
		sum_temp = n1_temp + n2_temp + carryover;
		if (n1_index < 0 && n2_index < 0 && sum_temp == 0)
			break;
		carryover = sum_temp / 10;
		remainder = sum_temp % 10;
		r[buffer_index] = remainder + '0';
	}
	if (buffer_index < 0 && (n1_index >= 0 || n2_index >= 0 ||
				carryover > 0))
		return (0);
	if (buffer_index > 0)
	{
		for (move_index = 0, buffer_index += 1;
		buffer_index <= size_r - 1; move_index++, buffer_index++)
			r[move_index] = r[buffer_index];
	}
	return (r);
}
