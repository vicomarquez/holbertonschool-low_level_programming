#include "main.h"
/**
 *print_most_numbers - prints numbers from 0 to 9
 *_putchar - adds a new line
 *Return: always 0
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		if (x != '2' && x != '4')
		_putchar(x);
	}
		_putchar('\n');
}
