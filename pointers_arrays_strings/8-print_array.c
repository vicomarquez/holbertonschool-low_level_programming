#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 *@a: character to check
 *Return: the length of a string
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		if (n - (b + 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	}
	_putchar('\n');
}
