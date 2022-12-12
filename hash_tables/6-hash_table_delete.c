#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *Head = ht;
	hash_node_t *Node, *TMP;
	unsigned long int I;

	for (I = 0; I < ht->size; I++)
	{
		if (ht->array[I] != NULL)
		{
			Node = ht->array[I];
			while (Node != NULL)
			{
				TMP = Node->next;
				free(Node->key);
				free(Node->value);
				free(Node);
				Node = TMP;
			}
		}
	}
	free(Head->array);
	free(Head);
}
