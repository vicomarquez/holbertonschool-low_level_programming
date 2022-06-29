#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 *@d: struct
 *Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name = name);
		free(d->owner = owner);
		free(d->age = age);
	}
}
