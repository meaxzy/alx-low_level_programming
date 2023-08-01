#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to head of the listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> n;
		printf("%d\n", count);
	}
	return (count);
}
