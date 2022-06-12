#include "main.h"
/**
 *print_square - prints a square
 *_putchar - adds a new line
 *@size: value to check
 *Return: always 0
*/

void print_square(int size)
{
	char a, b;

	if (size <= 0)
	{
		size = 0;
		_putchar('\n');
	}
	for (a = 0; a < size ; a++)
	{
		b = size;
		for (; b > 0 ; b--)
			_putchar('#');
		_putchar('\n');
	}
}
