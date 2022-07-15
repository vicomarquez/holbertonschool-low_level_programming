#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node a the beginning of a linked list
 *
 * @head: pointer to head
 *
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (head == NULL && str == NULL)
		return (NULL);
	for (; str[i] ; i++)
		return;

	new = malloc(sizeof(struct list_t));
	new-> str = strdup(str);
	new-> next = *head;
	*head = new;
	
	return (new);
}
