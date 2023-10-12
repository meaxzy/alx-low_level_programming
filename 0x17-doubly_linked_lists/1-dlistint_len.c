#include "lists.h"

/**
 * dlistint_len - a function that return number of element
 *
 * @h: pointer to the first node
 * Return: length of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		h = h -> next;
		count ++;
	}
	return (count);
}
