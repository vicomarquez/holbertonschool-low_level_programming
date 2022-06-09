#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char x; 
	for (x = 0; x <= 10 ; x++)
		for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
