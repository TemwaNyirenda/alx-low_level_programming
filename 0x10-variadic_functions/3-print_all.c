#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list vargs);
void print_int(va_list vargs);
void print_float(va_list vargs);
void print_str(va_list vargs);
/**
 * struct type - struct used to print according to type indicated
 * @format: used to indicate what type to print
 * @f: the function used to print that type
 */
typedef struct type
{
	char *format;
	void (*f)(va_list vargs);

} types;

/**
 * print_all - prints according to type indicated by string format
 * @format: const string used to show type of upcoming variable arguments
 *
 * Return: nothing (void)
 */
void print_all(const char * const format, ...)
{
	types choice[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};
	int i = 0, j = 0;
	va_list vargs;
	char *separator = "";

	va_start(vargs, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == choice[j].format[0])
			{
				printf("%s", separator);
				choice[j].f(vargs);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

/**
 * print_char: prints a char
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_char(va_list vargs)
{
	printf("%c", va_arg(vargs, int));
}

/**
 * print_int: prints a float
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_int(va_list vargs)
{
	printf("%d", va_arg(vargs, int));
}
/**
 * print_float: prints a float
 * @vargs: pointer to current position in va_list
 * 
 * Return: nothing (void)
 */
void print_float(va_list vargs)
{
	printf("%f", va_arg(vargs, double));
}
/**
 * print_string: prints a string
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_str(va_list vargs)
{
	char *str = va_arg(vargs, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
