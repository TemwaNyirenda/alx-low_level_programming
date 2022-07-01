#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void error_message(void);
int is_only_digits(char *str);
int _strlen(char *str);
int convert_char_to_int(char c);
int is_num_zero(int *array, int len);
void multiply_int_array(int *array1, int *array2, int len1, int len2);
int *_memset(int *s, int b, unsigned int n);

/**
 * main - multiplies two numbers passed as arguments on the command line
 * argc: the number of arguments
 * argv: the pointer to an array of arguments
 *
 * Return: the two numbers multiplied
 */
int main(int argc, char *argv[])
{
	int j, k, *ptr_num1, *ptr_num2;
	if (argc != 3)
		error_message();

	for (j = 1; j < argc; j++)
		if (is_only_digits(argv[j]) == 1)
			error_message();

	ptr_num1 = malloc(sizeof(int) * _strlen(argv[1]));
	if (ptr_num1 == NULL)
		error_message();
	ptr_num2 = malloc(sizeof(int) * _strlen(argv[2]));
	if (ptr_num2 == NULL)
		error_message();

	for (k = 0; k < _strlen(argv[1]); k++)
		ptr_num1[k] = convert_char_to_int(argv[1][k]);

	for (k = 0; k < _strlen(argv[2]); k++)
		ptr_num2[k] = convert_char_to_int(argv[2][k]);

	if (is_num_zero(ptr_num1, _strlen(argv[1])) == 0 ||
			is_num_zero(ptr_num2, _strlen(argv[2])) == 0)
	{
		_putchar(0 + 48);
		_putchar('\n');
	}
	else
		multiply_int_array(ptr_num1, ptr_num2, _strlen(argv[1]),
			_strlen(argv[2]));

	free(ptr_num1);
	free(ptr_num2);
	return (0);
}

/**
 * error_message - prints an error message and exits with 98
 *
 * Return: nothing
 */
void error_message(void)
{
	int i;
	char *error_message = "Error\n";
			
	for (i = 0; i < 6; i++)
		_putchar(error_message[i]);
	exit(98);
}

/**
 * is_only_digits - checks that the string is only digits
 * @str: the string to be checked
 *
 * Return: 1 if it's not only digits, 0 if only digits
 */
int is_only_digits(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
	}

	return (0);
}

/**
 * _strlen - calculates the string length
 * @str: the string used in the calculation
 *
 * Return; the string length
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * convert_char_to_int - converts a digit char to an int
 * @c: the char used in the conversion
 *
 * Return: the int version of the digit char
 */
int convert_char_to_int(char c)
{
	if (c == '0')
		return (0);
	else if (c == '1')
		return (1);
	else if (c == '2')
		return (2);
	else if (c == '3')
		return (3);
	else if (c == '4')
		return (4);
	else if (c == '5')
		return (5);
	else if (c == '6')
		return (6);
	else if (c == '7')
		return (7);
	else if (c == '8')
		return (8);
	else
		return (9);
}

/**
 * is_num_zero - checks if an array of int is all zero
 * @array: array to be checked
 * @len: length of the array
 *
 * Return: 0 if it's all zeroes, 1 otherwise
 */
int is_num_zero(int *array, int len)
{
	int i;

	for(i = 0; i < len; i++)
	{
		if (array[i] != 0)
			return (1);
	}

	return (0);
}

/**
 * multiply_int_array - multiplies an array of ints
 * @array1: first array in multiplication
 * @array2: second array in multiplication
 * @len1: length of first array
 * @len2: length of second array
 * @tlen: length of new array to hold multiplication
 *
 * Return: nothing - void
 */
void multiply_int_array(int *array1, int *array2, int len1, int len2)
{

	int i, j, k, l, mul, sum = 0, carry_over = 0, mul_c_o, col;
	int **ptr2mul, *ptr2mul_sum; 

	if (len1 > len2) /* col is columns in 2D array */
		col = len1 * 2;
	else
		col = len2 * 2;
		
	ptr2mul_sum = malloc(sizeof(int) * col);
	if (ptr2mul_sum == NULL)
		error_message();

	ptr2mul = malloc(sizeof(int *) * len2); /* len2 number of rows */
	if (ptr2mul == NULL)
	{
		free(ptr2mul_sum);
		error_message();
	}

	for (i = 0; i < len2; i++)
	{
		ptr2mul[i] = malloc(sizeof(int) * col);
		if (ptr2mul[i] == NULL)
		{
			free(ptr2mul_sum);
			free(ptr2mul);
			while (i >= 0)
			{
				free(ptr2mul[i]);
				i--;
			}
			error_message();
		}
	}
	
	
/*
	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", tlen);
	for (i = 0; i < len1; i++)
		printf("%d\n", array1[i]);
	for (i = 0; i < len2; i++)
		printf("%d\n", array2[i]);
*/
/*	if (len1 < len2)
		max_len = len1;
	else
		max_len = len2;
*/
	for (j = len2 - 1, k = 0; k < len2; j--, k++)
	{
		for (i = len1 - 1, l = k; l < col; i--, l++)
		{

			if (i < 0)
				mul = 0;
			else
				mul = array1[i] * array2[j];
/*			printf("\t\tarray1[%d] = %d, array2[%d] = %d, mul = %d\n", i, array1[i], j, array2[j], mul);
*/			mul_c_o = mul + carry_over;

			ptr2mul[k][l] = mul_c_o % 10;
			carry_over = mul_c_o / 10;
/*			printf("\t ptr2mul[%d][%d] = %d and carryover = %d\n", k, l, ptr2mul[k][l], carry_over);
*/		}
	}

	carry_over = 0;

	for (l = 0; l < col; l++)
	{
		sum = carry_over;
		for(k = 0; k < len2; k++)
		{
			sum += ptr2mul[k][l];
			carry_over = sum / 10;
			ptr2mul_sum[l] = sum % 10;
/*			printf("l = %d, k = %d, array = %d, sum = %d, carryover = %d\n", l, k, ptr2mul[k][l], sum, carry_over);
*/		}
	}

	for (l = col - 1; l >= 0; l--)
	{
		if (l == col - 1 && ptr2mul_sum[l] == 0)
		{
/*			printf("\t\t\tptr2mul_sum[%d] = %d\n", l, ptr2mul_sum[l]);
*/			while (ptr2mul_sum[l] == 0)
			       l--;
	
		}

		_putchar(ptr2mul_sum[l] + 48);
	}
	_putchar('\n');
	
	free(ptr2mul_sum);
	free(ptr2mul);
	for (i = 0; i < len2; i++)
	{
		free(ptr2mul[i]);
	}
}

/**
 * _memset - fills memory with a constant byte, b
 * @s: the memory area to be filled
 * @b: the constant byte that will fill the memory
 * @n: the amount of bytes in memory area s will be filled with b
 *
 * Return: a point to memory area s
 */
int *_memset(int *s, int b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}

