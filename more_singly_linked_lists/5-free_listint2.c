#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((new = temp) != NULL)
		{
			temp = temp->next;
			free(new);
		}
		*head = NULL;
	}
}
