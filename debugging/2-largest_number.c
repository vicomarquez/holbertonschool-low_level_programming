#include "main.h"

/**
 * largest_number - largest 3 numbers
 *@x: int to check
 *@y: int to check
 *@z: int to check
 *Return: 0
 */
int largest_number(int x, int y, int z)
{
	int lr;

	if ((x > y && x > z) || (x == y && x > z))
		lr = x;
	else if ((y > x && y > z) || (y == z && y > x))
		lr = y;
	else
		lr = z;

	return (lr);
}
