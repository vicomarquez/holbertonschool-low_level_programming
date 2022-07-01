#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - sums two integers
 *@a: integer
 *@b: integer
 *Return: the sum of the integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts 
 * @a: integer
 * @b: integer
 * Return: difference of integers 
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer
 * @b: integer
 * Return: the product of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div  - divides two integers
 * @a: integer
 * @b: integer
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module
 * @a: integer
 * @b: integer
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#endif
