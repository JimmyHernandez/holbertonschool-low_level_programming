#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Constant variable for Hash Table.
 * @key: Constant Character for the value we're looking for.
 * @Return: Value associated with the element,
 * or NULL if key couldn’t be found.
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *Node;
	unsigned long int IDX;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	IDX = key_index((const unsigned char *)key, ht->size);
	if (IDX >= ht->size)
	{
		return (NULL);
	}

	Node = ht->array[IDX];
	while (Node && strcmp(Node->key, key) != 0)
	{
		Node = Node->next;
	}
	return ((Node == NULL) ? NULL : Node->value);
}
