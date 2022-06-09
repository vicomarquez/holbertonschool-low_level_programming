#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int y;
	char x; 
	for (y = 0 ; y <= 10 ; y++)
		for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
