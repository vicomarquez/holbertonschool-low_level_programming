#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *_putchar - adds a new line
 *Return: always 0
*/

void print_line(int n)
{

	if (n < 0)
		n = 0;
	for (; n > 0 ; n--)
	{
		_putchar('_');
	}
		_putchar('\n');
}
