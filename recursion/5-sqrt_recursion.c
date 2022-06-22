#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number:wqi
 *
 *@n: integer
 *
 *Return: something
 *
 */

int _sqrt_recursion(int n)
{
	int y;
	int *p;

	y = n;
	p = &y;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	else
		_rec(p, 1);
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
	if (j * j < *p)
	{
		j++;
		_rec(*p, j);
	}
	else if (j * j == *p)
		*p = j;
	else 
		*p = -1;
	return;

