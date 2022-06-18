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
		if (n - (b++))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
