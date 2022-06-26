#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - duplicates a string
 *
 *@str: pointer
 *
 *Return: NULL
 */

char *_strdup(char *str)
{
	char *i;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);
	j = k = 0;
	while (str[k] != '\0')
	{
		k++
	}
	k++;
	i = malloc(k * sizeof(*str));

	if (i == NULL)
		return (NULL);

	for (j <= k)
	{
		i[j] = str[j];
	}
	return (i);
}
