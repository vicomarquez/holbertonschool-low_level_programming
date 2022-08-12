#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: integer
 *@size: integer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size * size; i += (size + 1))
		j += a[i];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		k += a[i];
	printf("%d, %d\n", j, k);
}
