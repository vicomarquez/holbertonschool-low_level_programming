#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * delete_nodeint_at_index - returns a sum of the data of a linked list
 *
 * @head: pointer to head
 * @idx: integer
 * @n: integer
 *
 * Return: if empty return 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int j = 0;
	listint_t *new = *head;
	listint_t *delete;

	if (new == NULL)
		return (NULL);
	if (idex == 0)
	{
		new->next = *head;
		free(new)
		return (1);
	}

	while (j < index)
	{
		new = new->next;
		if (new == NULL)
			return(NULL);
		j++;
	}
	delete = new->next;
	new->n = new->next->n;
	tmp->next = new->next->next;

	free(delete);
	return (1);
}
