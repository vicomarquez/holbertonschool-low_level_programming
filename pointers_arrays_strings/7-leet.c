#include "main.h"
/**
 * leet - reverses content of an array of integers
 * @a: character to check
 * Return: always 0
 */
char *leet(char *a)
{
	int i, j;

	char u[] = {'A', 'E', 'O', 'T', 'L'};
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == u[j] || a[i] == l[j])
				a[i] = n[j];

		}
	}
	return (a);
}
