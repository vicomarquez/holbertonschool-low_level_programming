#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list.
 *
 * @head: head pointer
 * @n: integer
 *
 * Return: the address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (!*head)
		(*head)->prev = new;
	return (new);
}
