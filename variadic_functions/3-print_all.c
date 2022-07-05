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
	unsigned int j;
	char *s;
	double f;
	int c, i;

	va_start(arg, format);
	while (format[j] != '\0')
	{	
		c = va_arg(arg, int);
		i = va_arg(arg, int);
		f = va_arg(arg, double);
		s = va_arg(arg, char*);

		switch (format[j])
		{
			case 0:
				printf("%c", c);
				break;
			case 1:
				printf("%d", i);
				break;
			case 2:
				printf("%f", f);
				break;
			case 3:
				if (format[j] == '\0')
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		printf(", ");
		j++;
	}
	va_end(arg);
	printf("\n");
}
