#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - frees a doubly linked list.
 *
 * @head: head pointer
 * @index: index
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i != index)
		return (NULL);
	return (temp);
}
