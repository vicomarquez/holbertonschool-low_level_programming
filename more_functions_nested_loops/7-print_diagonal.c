#include "main.h"
/**
 *print_diagonal - draws a diagonal line in the terminal
 *_putchar - adds a new line
 *@n: chracter to check
 *Return: always 0
*/

void print_diagonal(int n)
{

	if (n < 0)
		n = 0;
	for (; n > 0 ; n--)
	{
		_putchar('\\');
	}
		_putchar('\n');
}
