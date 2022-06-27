#include "main.h"
/**
 ** *leet - copies a string
 *@dest: character to check
 *@src: character to check
 *@n: integer
 *Return: the length of a string
 */
char *leet(char *s)
{
	int i;
	int j;
	
	char mariah[] = {'O', 'L', '~', 'E', 'A', '~', '~', 'T'};	

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; j < 8 ; j++)
	{
		if (s[i] == mariah[j])
			s[i] = j + 0;
	}
	return (dest);
}
