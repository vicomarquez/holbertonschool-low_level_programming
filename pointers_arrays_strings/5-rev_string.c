#include "main.h"
/**
 * rev_string - reverses a string
 *@s: character to check
 *Return: the length of a string
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int length = _strlen(s);
	int k = length -1
	char a;

	for (i = j ; i < k ; i++)
	{
		b = s[i];
		s[i] = s[k];
		s[k] = b;
		k--;
	}
	_putchar ('\n');
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

