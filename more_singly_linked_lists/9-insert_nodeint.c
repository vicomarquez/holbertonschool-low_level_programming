#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * insert_nodeint_at_index - returns a sum of the data of a linked list
 *
 * @head: pointer to head
 * @idx: integer
 * @n: integer
 *
 * Return: if empty return 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int j = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (*head != NULL)
	{
		if (j + 1 == (int) idx)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		head = &(*head)->next;
		j++;
	}
	return (NULL);
}
