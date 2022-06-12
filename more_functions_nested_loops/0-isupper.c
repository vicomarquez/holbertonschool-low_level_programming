#include "main.h"
/**
 *_isupper - checks for uppercase character
 *
 *Return: 1 if c is upercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
