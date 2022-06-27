#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 *
 *@min: integer
 *
 *@max: char
 *
 *Return: NULL
 */

int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(*i) * ((max - min) + 1));

	if (i == NULL)
		return (NULL);

	for (j = 0 ; min <= max ; j++, min++)
		i[j] = min;

	return (i);
}
