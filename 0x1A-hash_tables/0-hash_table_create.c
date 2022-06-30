#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table

 * Return: pointer to the new table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *temp = NULL;
    if (size == NULL)
    {
        return (NULL);
    }
    temp = malloc(sizeof(hash_table_t)); /* malloc to store size&array */
    if (temp == NULL)
    {
        return (NULL);
    }
    temp->size = size;
    temp->array = malloc(sizeof(hash_node_t *)); /* malloc for each node */
    if (temp->array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        temp->array[i] = NULL; /* set all nodes to NULL */
    }
    return (temp);
}