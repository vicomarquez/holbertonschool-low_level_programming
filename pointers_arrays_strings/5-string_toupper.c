#include "main.h"
/**
 * string_toupper - reverses content of an array of integers
 * @a: character to check
 */
char *string_toupper(char *a)
{
	int i = 0;
	int length = _strlen(a);

	while (i < length)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
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
