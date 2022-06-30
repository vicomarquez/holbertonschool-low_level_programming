#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function
 *@array: pointer
 *@size: pointer
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action))
{
	int i;

	for(i = 0 ; i > size ; i++)
		(*action)(array[i]);
}
