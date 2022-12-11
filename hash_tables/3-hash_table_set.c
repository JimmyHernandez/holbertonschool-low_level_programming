#include "hash_tables.h"
/**
 * hash_table_set - Adds a new element to the hash table
 * @ht: Pointer to hash table
 * @key: A non-empty character for key.
 * @value: Character for key's value.
 * Return: 1 (Success), 0 (Failure)
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *NewEle;
        char *ValCopy;
        unsigned long int IDX, I;

        if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        {
                return (0);
        }

        ValCopy = strdup(value);
        if (ValCopy == NULL)
        {
                return (0);
        }

        IDX = key_index((const unsigned char *)key, ht->size);
        for (I = IDX; ht->array[I]; I++)
        {
                if (strcmp(ht->array[I]->key, key) == 0)
                {
                        free(ht->array[I]->value);
                        ht->array[I]->value = ValCopy;
                        return (1);
                }
        }

        NewEle = malloc(sizeof(hash_node_t));
        if (NewEle == NULL)
        {
                free(ValCopy);
                return (0);
        }
        NewEle->key = strdup(key);
        if (NewEle->key == NULL)
        {
                free(NewEle);
                return (0);
        }
        NewEle->value = ValCopy;
        NewEle->next = ht->array[IDX];
        ht->array[IDX] = NewEle;
        return (1);
}
