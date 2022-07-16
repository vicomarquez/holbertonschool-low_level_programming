#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_listint - prints all elements of a linked list
 *
 * @h: pointer to head 
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int sum = 0;

	for (; h != NULL ; sum++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (sum);
}
