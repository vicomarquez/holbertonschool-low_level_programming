#include "main.h"
/**
 * _strlen - returns the length of a string
 *@s: character to check
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int l, k = 0;

	for (l = 0; *(s++) != '0' ; l++)
	{
		k++;
	}
	return (k);
}
