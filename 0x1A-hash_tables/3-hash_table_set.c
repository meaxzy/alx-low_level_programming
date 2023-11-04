#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in the hash table.
 * @ht: The hash table to add/update the key-value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 * 
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
        return (0);

    index = hash_djb2((const unsigned char *)key) % ht->size;

    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Key already exists, update the value */
            char *new_value = strdup(value);
            if (new_value == NULL)
                return (0);

            free(current->value);
            current->value = new_value;
            return (1);
        }
        current = current->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}

