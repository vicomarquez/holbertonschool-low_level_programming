#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars.
 *
 *
 *
 *Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	j = 0;

	if (size == 0)
		return (NULL);

	i = malloc (size * sizeof(char));

	if (i == NULL)
		return (NULL);

	while (j < size)
	{
		j++;
		i[j] = c;
	}
	return (i);
}
