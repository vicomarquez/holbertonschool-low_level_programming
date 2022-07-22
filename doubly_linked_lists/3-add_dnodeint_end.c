#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list.
 *
 * @head: head pointer
 * @n: integer
 *
 * Return: the address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (*head);
}
