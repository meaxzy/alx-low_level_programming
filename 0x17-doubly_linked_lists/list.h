#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - double linked list
 * @n: integer
 * @previous: points to the previous node
 * @next: points to the next node
 *
 * Description: double linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	struct dlistint_s *previous;
	int n;
	struct dlistint_s *next;
} dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);

#endif
