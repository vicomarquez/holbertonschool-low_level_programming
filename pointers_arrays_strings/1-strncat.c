#include "main.h"
/**
 **_strncat - copies a string
 *@dest: character to check
 *@src: character to check
 *@n: integer
 *Return: the length of a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
