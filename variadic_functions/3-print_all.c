#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 *Return: 0
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int j = 0;
	char *k;

	va_start(arg, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				k = va_arg(arg, char*);
				if (k == 0)
				{
					printf("(nil)");
					break;
				}
				printf("%s", k);
				break;
			default:
				j++;
				continue;
		}
		if (format[j + 1] != '\0' && format)
			printf(", ");
		j++;
	}
	va_end(arg);
	printf("\n");
}
