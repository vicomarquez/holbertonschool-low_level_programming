#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to string
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int convert = 0;
	unsigned int length = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else
			i++;
	}
	while (i < length)
	{
		convert = convert << 1;
		if (b[i] == '1')
			convert += 1;
		i++;
	}
	return (convert);
}
