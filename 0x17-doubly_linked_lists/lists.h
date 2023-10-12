#ifndef _LISTS_H
#define _LISTS_H

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
        int n;
	struct dlistint_s *prev;
        struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif
