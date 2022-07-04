#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 *
 *@n - unsigned int
 *
 *Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int j;

	if (n == 0)
		return (0);

	va_start (num, n);

	for (j = 0 ; j < n ; j++)
		sum += va_arg (num, int);

	va_end (num);
	return (sum);
}
