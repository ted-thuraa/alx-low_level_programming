#include "hash_tables.h"

/**
* hash_table_get - a function that returns value of a key
* @ht: the hash table
* @key: the key
* 
*
* Return: 1 if worked 0 if fuuuuuu
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index = 0;
    hash_node_t *check = NULL;

    if (ht == NULL || key == NULL)
    {
        return (NULL); /* if null hash table, key, error */
    }
    index = key_index((unsigned char *)key, ht->size);
    /* check is now the key's assigned index bucket */
    check = ht->array[index];
    while (check) /* check if the key already exists */
    {
        if (!strcmp(key, check->key)) /* strcmp returns 0 if matches */
        {
                return (check->value); /* found match, return */
        }
        check = check->next;
    }
    return (NULL);
}