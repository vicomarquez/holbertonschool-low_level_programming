#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - executes a function
 *@array: pointer
 *@size: pointer
 *@cmp: pointer
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
