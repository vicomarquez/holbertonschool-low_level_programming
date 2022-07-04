#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: numbersof strings
 * @separator: string between numbers
 *
 *Return: 0
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;

	va_start(arg, n);
	for (j = 0 ; j < n ; j++)
	{
		if (separator && j < n - 1)
			printf("%s", separator);
		else if (va_arg(arg, char *) == NULL)
			printf("(nil)");
		else 
			printf("%s", va_arg(arg, char *));

	}
	va_end(arg);
	printf("\n");
}
