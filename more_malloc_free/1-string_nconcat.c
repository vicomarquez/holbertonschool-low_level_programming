#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 *
 *@s1: char
 *@s2: char
 *@n: integer
 *
 *Return: NULL
 */

void *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int j;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = 0;
	while (s1[k] != '\0')
		k++;

	i = malloc(sizeof(char) * (k + n) + 1);
	if (i == NULL)
		return (NULL);
	k = j = 0;

	while (s1[k] != '\0')
	{
		i[k] = s1[k];
		k++;
	}
	while (j < n && s2[j] != '\0')
	{
		i[k] = s2[j];
		k++, j++;
	}
	i[k] = '\0';
	return (i);
}
