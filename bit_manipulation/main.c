#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	return (0);
}
