#include "lists.h"

/**
 * sum_dlistint - sum the data in the node
 *
 * @head: pointer to head of the node
 * Return: sum of the integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
