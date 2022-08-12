#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: string
 *Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
				return ((haystack + i) - (j - 1));
		}
		else
			j = 0;
	i++;
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}
