#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: string
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	if (s[count] == c)
		return (s + count);
	return (0);
}
