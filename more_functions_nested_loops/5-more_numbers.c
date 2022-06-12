#include "main.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *_putchar - adds a new line
 *Return: always 0
*/

void more_numbers(void)
{
	int x;
	int y;
	int z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
	{
		z = y + '0';
		if (y > 9)
		{
			z = (y % 10) + '0';
			_putchar('1');
		}
		_putchar(z);
	}
		_putchar('\n');
	}
}
