#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer
 * @index: integer
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n = n >> index;
	return (n & 1);
}
