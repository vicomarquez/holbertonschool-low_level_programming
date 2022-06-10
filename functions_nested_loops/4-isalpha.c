#include "main.h"
/**
 *_islower - checks for alphabetic character
 *
 * @c: The caharacter to check
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' ; c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
