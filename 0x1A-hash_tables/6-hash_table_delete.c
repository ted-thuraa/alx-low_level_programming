#include "hash_tables.h"

/**
* hash_table_delete - a function that deletes the hash table
* @ht: the hash table
*
* Return: notin
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *headtemp;
    hash_node_t *temp;
    unsigned int index = 0;

    if ht != NULL; /* if something to free */
    {
        while (index < ht->size)
        {/* loop through the whole hash table buckets */
            headtemp = ht->array[index];
            while (headtemp)
            {/* free me baby */
                temp = headtemp->next;
                free(headtemp->key);
                free(headtemp->value);
                free(headtemp);
                headtemp = temp;
            }
            index++;
        }
        /* The outer main table */
        free(ht->array);
        free(ht);
    }
    return;
}