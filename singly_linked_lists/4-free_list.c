#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list
 *
 * @head: pointer to head
 *
 * Return: the address of the new element, or NULL if it failed
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}


}
