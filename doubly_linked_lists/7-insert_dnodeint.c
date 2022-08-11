#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - sums all data
 *
 * @h: head pointer
 * @idx: unsigned int
 * @n: int
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

	if (h == NULL || (temp == NULL && idx != 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (temp != NULL)
	{
		if (idx == i)
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		if ((idx - 1) == i && temp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
