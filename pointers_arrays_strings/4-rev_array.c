#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: character to check
 * @n: character to check
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n - 1)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
		i++;
	}
}
