#include "lists.h"

/**
 * print_dlistint - a function that print the list
 *
 * @h: pointer to the head
 * return: number of the nodesAAA
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	
	return (count);
}
