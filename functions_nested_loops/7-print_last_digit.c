 #include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to check
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	if (x <= -2147483648)
		x = 8;
	else
	{
		if (x < 0)
			x = -1 * x;
		x = x % 10;
	}
	_putchar(x + '0');
	return (x);
}
