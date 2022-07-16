#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * listint_len -returns the number of elements of a linked list
 *
 * @h: pointer to head
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int sum = 0;

	for (; h != NULL ; sum++)
	{
		h = h->next;
	}
	return (sum);
}
