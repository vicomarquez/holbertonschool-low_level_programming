#include "main.h"
/**
 *print_diagonal - draws a diagonal line in the terminal
 *_putchar - adds a new line
 *@n: chracter to check
 *Return: always 0
*/

void print_diagonal(int n)
{
	char a, b;

	{
		n = 0;
		_putchar('\n');
	}
	for (a = 0; a < n ; a++)
	{
		b = a;
		for (; b > 0 ; b--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
