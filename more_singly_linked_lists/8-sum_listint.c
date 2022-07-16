#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * sum_listint - returns a sum of the data of a linked list
 *
 * @head: pointer to head
 *
 * Return: if empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
