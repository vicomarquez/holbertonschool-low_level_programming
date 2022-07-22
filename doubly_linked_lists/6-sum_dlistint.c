#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * sum_dlistint - sums all data
 *
 * @head: head pointer
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
