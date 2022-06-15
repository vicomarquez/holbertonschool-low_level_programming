#include "main.h"
/**
 * void swap_int(int *a, int *b - takes a pointer to an int and updates the value to 98
 *@c: character to check
 *@a: character to check
 *@b: character to check
 */
void swap_int(int *a, int *b)
{
	int c;
	c  = *a;
	*a = *b;
	*b = c;
}
