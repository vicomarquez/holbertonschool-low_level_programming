#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *
 *@s: string
 *Return: length of string
 *
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(++s);
	}
	else
	{
		return count;
	}
}
