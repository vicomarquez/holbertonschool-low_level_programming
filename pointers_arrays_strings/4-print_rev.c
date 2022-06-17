#include "main.h"
/**
 * print_rev - prints a string in reverse
 *@s: character to check
 *@a: character to check
 *Return: the length of a string
 */
void print_rev(char *a)
{
	int i = 0;

	for (i = a - 1 ; i >= 0 ; i--);
	{
		_putchar (a[i]);
	}
	putchar ('\n')
}


{
	int l;

	for (l = 0 ; s[l] != '\0' ; l++)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}

