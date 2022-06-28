#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Defines a new type
 *@name: dog's name
 *@owner: dog's owner
 *@age:dog's age
 *@d: struct
 *Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
