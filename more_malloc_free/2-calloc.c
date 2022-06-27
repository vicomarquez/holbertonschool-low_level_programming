#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - creates an array of integers
 *
 *@nmemb: integer
 *
 *@size: int
 *
 *Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	for (j = 0 ; j < (nmemb * size) ; j++)
		i[j] = 0;

	return (i);
}
