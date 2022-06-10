#include "main.h"
/**
 * int _islower(int c) - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	int c;

	if ( islower (c) )
	{
		return (1);
	}
	else
		return (0);

}
