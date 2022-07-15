#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node a the end of a linked list
 *
 * @head: pointer to head
 *
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	*head = NULL;

	new = malloc(sizeof(list_t));
	if (*head == NULL)
		*head = new;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
