#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 *
 *@str: pointer
 *
 *Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *i;
	unsigned int j, k, l;

	k = 0;
	l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}

	i = malloc((sizeof(char) * k) + (sizeof(char) * l) + 1);

	if (i == NULL)
		return (NULL);
	for (j = 0 ; j < (k + l) ; j++)
	{
		if (j >= k)
			i[j] = s2[j - k];
		else
			i[j] = s1[j];
	}
	i[j] = '\0';
	return (i);
}
