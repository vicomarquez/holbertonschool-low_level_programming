#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to head
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	for (; h != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
