#include "main.h"
/**
 *factorial -  returns the factorial of a given number.
 *
 *@s: string
 *Return: -1 (error)
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return n * factorial(n - 1);
}
