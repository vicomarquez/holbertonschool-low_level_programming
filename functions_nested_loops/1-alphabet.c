#include "main.h"

/**
 * main- prints the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0 (succesful)
*/

void print_alphabet(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
