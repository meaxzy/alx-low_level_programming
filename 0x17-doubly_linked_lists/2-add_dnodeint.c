#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 *
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @n: number to be allocated to the new node
 * Return: pointer to the address, NULL if empty
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (*head);
}
