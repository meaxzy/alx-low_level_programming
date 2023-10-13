#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *
 * @head: pointer to the first node
 * @index: index of the list
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);

	while (node < index)
	{
		if (node == index)
		{
			return (head);
		}
	}
	head = head->next;
	node++;

	return (head);
}
