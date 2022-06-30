#include "hash_tables.h"

/**
* hash_table_print - a function that returns value of a key
* @ht: the hash table
* @key: the key
* 
*
* Return: 1 if worked 0 if fuuuuuu
*/
void hash_table_print(const hash_table_t *ht)
{
    
    hash_node_t *temp = NULL;
    unsigned int index = 0;
    char *s = "";

    if (ht == NULL)
    {
        return (NULL); /* if null hash table, key, error */
    }
    putchar('{'); /* formating */
    while ( index < ht->size) 
    {
        temp = ht->array[index];
        if (temp)
        {
            printf("%s", s);
        }
        while (temp)
        {
            printf("'%s': '%s'", temp->key, temp->value);
            if (temp->next) /* if there is more, print puncuation */
            {
                printf("%s", s);
            }
            temp = temp->next;
            s = ", ";
        }
        index++;
    }
    putchar('}');
    putchar(10);
}