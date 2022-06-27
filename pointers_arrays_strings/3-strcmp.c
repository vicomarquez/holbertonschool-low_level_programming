#include "main.h"
/**
 *_strcmp - compares two strings
 *@s2: character to check
 *@s1: character to check
 *Return: the length of a string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
}
