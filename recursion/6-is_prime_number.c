#include "main.h"
/**
 *is_prime_number - returns 1 if the integer is a prime number
 *
 *@n: integer
 *
 *Return: something
 *
 */

int is_prime_number(int n)
{
	int y;
	int *p;

	y = n;
	p = &y;

	if (y < 0)
		y = 0;
	else if (y == 0)
		y = 0;
	else if (y == 1)
		y = 0;
	else
		_rec(p, 2);
	return (y);
}
/**
 *_rec - recurses something
 *
 *@p: pointer
 *
 *@j: integer
 *Return: something
 */
void _rec(int *p, int j)
{
	if (*p % j != 0 && 2 * j < *p)
	{
		j++;
		_rec(p, j);
	}
	else if (*p % j == 0)
		*p = 0;
	else
		*p = 1;
}
