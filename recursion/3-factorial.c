#include "main.h"
/**
 *factorial -  returns the factorial of a given number.
 *
 *@n: integer
 *Return: -1 (error)
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		return (n * factorial(n - 1));
	}
}
