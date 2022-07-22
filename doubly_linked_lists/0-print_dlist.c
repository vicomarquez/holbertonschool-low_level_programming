#include "lists.h"
#include <stdio.h>
/* 
 * size_t -  prints all the elements of a doubly linked list
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
