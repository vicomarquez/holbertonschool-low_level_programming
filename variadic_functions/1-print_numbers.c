#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: numbers in function
 * @separator: string between numbers
 *
 *Return: 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;

	va_start(arg, n);
	for (j = 0 ; j < n ; j++)
	{
		printf("%d", va_arg(arg, int));
		if (separator)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
