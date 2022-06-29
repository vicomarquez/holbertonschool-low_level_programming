#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 *@d: struct
 *Return: 0
 */

void print_dog(struct dog *d);
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");

}
