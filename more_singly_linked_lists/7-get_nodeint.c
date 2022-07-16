#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_nodeint_at_index - gets node of a linked list
 *
 * @head: pointer to head
 * @index: index
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp

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
