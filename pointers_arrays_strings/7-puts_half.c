#include "main.h"
/**
 * puts_half - prints half of a string
 *@s: character to check
 *Return: the length of a string
 */
void puts_half(char *str)
{
	int a, b;
	int length = _strlen(str);

	if (length % 2)
		a = 0;
	else 
		a = 1;
	length /= 2;
	b = a;

	while (length + b > a)
	{
		_putchar(str[length + a]);
		a++;
	}
	_putchar('\n');
}
/**
 * _strlen - shows length of a string
 * @s: character to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0 ; s[l] != '\0' ; l++)
	{
	}
	return (l);
}

