#include "main.h"
/**
 *puts2 - reverses a string
 *@str: character to check
 *Return: the length of a string
 */
void puts2(char *str)
{
	int l;

	for (l = 0 ; str[l] != '\0' ; l++)
	{
		if (l == 0 || !(l % 2))
			_putchar(str[l]);
	}

	_putchar('\n');
}

