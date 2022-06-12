#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @x: the int to check
 * @n: the int to check
 * Return: void
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
		x = 1;
	else
		x = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += x;
	}
	printf("%d\n", 98);
}
