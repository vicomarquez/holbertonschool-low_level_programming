#include "main.h"
/**
 *swap_int - swaps two values
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
