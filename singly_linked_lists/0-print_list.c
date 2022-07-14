#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list
 *
 *@h: 
 *
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;
	
	if (h->str == NULL)
		printf([0] (nil));
	else
		printf("[%d] %s\n", h->len, h->str);
	node += 1;
	h = h->next;

return (node);
}
