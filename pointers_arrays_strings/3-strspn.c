#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (k);
	}
	return (k);
}
