#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *
 *
 *@s: string
 *
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (a != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}