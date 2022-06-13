#include "main.h"
/**
 *print_triangle - prints a triangle
 *_putchar - adds a new line
 *@size: value to check
 *Return: always 0
*/

void print_triangle(int size)
{
	char a, b, c;

	if (size <= 0)
	{
		size = 0;
		_putchar('\n');
	}
	for (a = 0; a < size ; a++)
	{
		b = size;
		c = a;
		for (c = 0; c < b ; c++)
		{
			if ((a + c) >= (size - c))
			_putchar('#');
			else
				_putchar(' ');
	}
		_putchar('\n');
	}
}
