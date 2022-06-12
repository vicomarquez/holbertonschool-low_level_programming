#include "main.h"
/**
 *print_numbers - multiplies two integers
 *_putchar - adds a new line
 *@x: integer
 *Return: always 0
*/

void print_numbers(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		_putchar(x);
	}
		
		_putchar('\n');

}
