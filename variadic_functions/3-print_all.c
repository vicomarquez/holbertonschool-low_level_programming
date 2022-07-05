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

	while (format != 0)
	{
		va_start(arg, format);
		while (format[j])
		{
			switch (format[j])
			{
				case 0:
					printf("%c", va_arg(arg, int));
					break;
				case 1:
					printf("%d", va_arg(arg, int));
					break;
				case 2:
					printf("%f", va_arg(arg, double));
					break;
				case 3:
					if (format[j] == '\0')
					{
						printf("(nil)");
						break;
					}	
					printf("%s", va_arg(arg, char *));
					break;
			}
			if (format[j + 1] != '\0' && format)
				printf(", ");
			j++;
		}
		va_end(arg);
		printf("\n");
	}
}