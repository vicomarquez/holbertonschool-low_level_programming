#include "main.h"
#include <stdlib.h>
/**
 * set_bit - returns the value of a bit at a given index
 *
 * @n: integer
 * @index: integer
 * Return: value of a bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
