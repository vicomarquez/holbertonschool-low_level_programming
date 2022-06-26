#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars.
 *
 *@size: integer
 *
 *@c: char
 *
 *Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if(size == 0)
		return (NULL);

	i = malloc (size * sizeof(char));

	if(i == NULL)
		return (NULL);

	for (j = 0 ; j < size ; j++)
	{
		i[j] = c;
	}
	return (i);
}
