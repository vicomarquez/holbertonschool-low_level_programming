#ifndef fpoint
#define fpoint
#include "function_pointers.h"
#include <stdlib.h>
#endif
/**
 * print_name - prints a name
 *@name: pointer
 *@f: pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
