#include "function_pointers.h"
/**
 * array_iterator - executes a function
 *@array: pointer
 *@size: pointer
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for(i = 0 ; i < size ; i++)
		action(array[i]);
}
