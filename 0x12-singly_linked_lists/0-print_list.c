#include "lists.h"

/**
 * print_list - prints elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: size of elements in list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("%s\n", ptr -> str);
		}
		count++;
		ptr = ptr -> next;
	}
	printf("[%d]", count);
	printf("%s\n", ptr -> str);
	return (count);
}
