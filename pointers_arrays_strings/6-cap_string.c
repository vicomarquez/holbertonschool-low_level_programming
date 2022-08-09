#include "main.h"
/**
 * cap_string - reverses content of an array of integers
 * @a: character to check
 * Return: always 0
 */
char *cap_string(char *a)
{
	int i = 0;
	int length = _strlen(a);

	for (; i < len; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\t' ||
			    a[i - 1] == '\n' || a[i - 1] == ',' ||
			    a[i - 1] == ';' || a[i - 1] == '.' ||
			    a[i - 1] == '!' || a[i - 1] == '?' ||
			    a[i - 1] == '"' || a[i - 1] == '(' ||
			    a[i - 1] == ')' || a[i - 1] == '{' ||
			    a[i - 1] == '}')
				a[i] = a[i] - 32;
		}	
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
