 #include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to check
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	while (x >= 10)
		x /= 10;
	{
		return (x % 10);
	}
}
