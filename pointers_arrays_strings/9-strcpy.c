#include "main.h"
/**
 * *_strcpy - copies a string
 *@dest: character to check
 *@src: character to check
 *Return: the length of a string
 */
int *strcpy(char *dest, char *src)
{
	int a = 0;
	int length = _strlen(src);

	length++;

	while (a < length)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
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

