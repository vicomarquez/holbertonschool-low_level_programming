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

	for (x = 1 ; x <= 10 ; x++)
	{
		for (y = '0' ; y <= '14' ; y++)
	{
		_putchar(x);
	}
		_putchar('\n');
	}
}
