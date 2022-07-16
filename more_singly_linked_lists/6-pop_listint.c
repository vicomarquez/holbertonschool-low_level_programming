#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to head
 *
 * Return: if is empty reutrn 0
 */

int pop_listint(listint_t **head)
{
	unsigned int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	i = temp->n;

	free(temp);
	return (i);
}
