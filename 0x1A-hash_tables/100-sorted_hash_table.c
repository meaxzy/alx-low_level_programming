#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Create a sorted hash table
 * @size: Size of the sorted hash table array
 * Return: A pointer to the created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *sht = malloc(sizeof(shash_table_t));

    if (!sht)
        return (NULL);

    sht->size = size;
    sht->array = calloc(size, sizeof(shash_node_t *));
    sht->shead = NULL;
    sht->stail = NULL;

    return (sht);
}

/**
 * shash_table_set - Add a key-value pair to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current;

    if (!ht || !key || !value)
        return (0);

    current = ht->shead;
    while (current && strcmp(key, current->key) > 0)
        current = current->snext;

    if (current && strcmp(key, current->key) == 0)
    {
        free(current->value);
        current->value = strdup(value);
        return (1);
    }

    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->snext = current;

    if (current)
        new_node->sprev = current->sprev;
    else
        new_node->sprev = ht->stail;

    if (new_node->sprev)
        new_node->sprev->snext = new_node;
    else
        ht->shead = new_node;

    if (current)
        current->sprev = new_node;
    else
        ht->stail = new_node;

    return (1);
}

/**
 * shash_table_get - Retrieve the value associated with a key from the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to look up
 * Return: The value associated with the key or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (!ht || !key)
        return (NULL);

    current = ht->shead;
    while (current)
    {
        if (strcmp(key, current->key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table in the right order
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;
    int first = 1;

    if (!ht)
        return;

    printf("{");
    current = ht->shead;
    while (current)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        first = 0;
        current = current->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;
    int first = 1;

    if (!ht)
        return;

    printf("{");
    current = ht->stail;
    while (current)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        first = 0;
        current = current->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (!ht)
        return;

    current = ht->shead;
    while (current)
    {
        temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }

    free(ht->array);
    free(ht);
}
