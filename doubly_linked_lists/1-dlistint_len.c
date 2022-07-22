#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements of a doubly linked list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
