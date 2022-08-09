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
	int j;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		i++;
	}
	return (0);
}
