#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - adds a node at the beginning of a linked list
 *
 * @head: pointer to head
 *
 * @n: integer
 *
 * Return: the number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
