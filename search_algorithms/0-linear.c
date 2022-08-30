#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || array == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %ld at index: %d\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
