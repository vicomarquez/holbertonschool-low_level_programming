#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * delete_nodeint_at_index - deletes a node
 *
 * @head: pointer to head
 * @index: integer
 *
 * Return: if empty return 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *new = *head;
	listint_t *delete;

	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (j < index)
	{
		new = new->next;
		if (new == NULL)
			return (-1);
		j++;
	}
	delete = new->next;
	new->n = new->next->n;
	new->next = new->next->next;

	free(delete);

	return (1);
}
