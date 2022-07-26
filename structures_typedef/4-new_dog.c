#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog - prints a struct dog
 *@name: dosg's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sasha = NULL;

	sasha = malloc(sizeof(dog_t));
	if (sasha != NULL)
	{
		sasha->name = _strdup(name);
		sasha->age = age;
		sasha->owner = _strdup(owner);
		if (sasha->name == NULL|| sasha->owner == NULL)
		{
			free(sasha->name);
			free(sasha->owner);
			free(sasha);
		}
		else
			free(sasha);
		return (sasha);
}

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
	int j, k;

	if (str != NULL)
		k = _strlen(str) + 1;
	else
		k = 0;
	if (k == 0)
		i = NULL;
	else
		i = malloc(k);
	if (i != NULL)
	{
		for (j = 0 ; j < k ; j++)
			i[j] = str [j];
	}
	return (i);
}

/**
 *_strlen - length
 *
 *@a: string
 *Return: length
 */

int _strlen(char *a)
{
	int  j = 0;

	while (a[j] != '\0')
		j++;
	return (j);
}
