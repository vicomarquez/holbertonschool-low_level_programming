#include "main.h"
/**
 * print_rev - prints a string in reverse
 * _strlen - shows length of a string
 *@s: character to check
 *Return: the length of a string
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1 ; i >= 0 ; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
/**
 * _strlen - shows length of a string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0 ; s[l] != '\0' ; l++)
	{
	}
	return (l);
}

