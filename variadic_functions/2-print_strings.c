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
	char *k;

	va_start(arg, n);
	for (j = 0 ; j < n ; j++)
	{
		k = va_arg(arg, char *);
		if (k == NULL)
			printf("(nil)");
		else
			printf("%s", k);
		if (separator && j < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
