#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - does something
 *
 * @n: integer
 * @m: integer
 * Return: value of a bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	unsigned long int i;

	i = (n ^ m);

	while (i)
	{
		sum += (i & 1);
		i >>= 1;
	}
	return (sum);
}
